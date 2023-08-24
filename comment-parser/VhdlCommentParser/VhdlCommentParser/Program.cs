using System.Numerics;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;

// Requires:
// -> Csv file as input with the first line and first column being used for comments
// + the second line being used for word width
// + an input data section beginning at line 3 column 2
// + an output data section that is separated from the input section by an empty column
// Functionality:
// -> Converts the csv file into two txt files
// + the first txt file contains the data from the input section of the original csv file
// + the second txt file contains the data from the output section of the original csv 

if (args.Length is 0 or > 1)
{
    Console.WriteLine("Usage: ./VhdlCommentParser.exe <file>");
    return;
}

string[] lines = File.ReadAllLines(args[0]);

string inputFileName = args[0].Replace(".csv", string.Empty) + "-inputs.txt";
if (File.Exists(inputFileName))
{
    File.Delete(inputFileName);
}
using FileStream input = File.OpenWrite(inputFileName);
using StreamWriter inputWriter = new(input);

string outputFileName = args[0].Replace(".csv", string.Empty) + "-outputs.txt";
if (File.Exists(outputFileName))
{
    File.Delete(outputFileName);
}
using FileStream output = File.OpenWrite(outputFileName);
using StreamWriter outputWriter = new(output);

string[] columnDefinitions = GetColumnsRegex().Split(lines[1]);
Dictionary<int, int> dicColumnWidth = new();

// if something is written in line 2 we expect it to be the word width of the column
// and that basically means that cell contents of the column are not binary digits
// (we only allow decimal values and binary digits) so that means its decimal values
for (int i = 0; i < columnDefinitions.Length; i++)
{
    if (!string.IsNullOrEmpty(columnDefinitions[i]))
    {
        dicColumnWidth.Add(i, Convert.ToInt32(columnDefinitions[i]));
    }
}

// ignore the first line when copying the content to a txt file
for (int i = 2; i < lines.Length; i++)
{
    string[] inputsAndOutputs = GetEmptyColumnRegex().Split(lines[i]);
    if (inputsAndOutputs.Length != 2)
    {
        Console.WriteLine("Could not detect input and output sections. Please provide input and output data separated by an empty column.");
        return;
    }
    string inputs = inputsAndOutputs[0];
    string outputs = inputsAndOutputs[1];

    List<string> inputWordsOriginal = GetColumnsRegex().Split(inputs).Skip(1).ToList();
    List<string> inputWordsConv = Conversions.DoConversions(inputWordsOriginal);

    // remove the first column of each line (first column is used for comments or similar)
    string processedInputWords = string.Join(' ', inputWordsConv);
    inputWriter.Write(processedInputWords);
    inputWriter.WriteLine();

    if (i == lines.Length - 1)
    {
        // add more (basically dummy) inputs to the end while waiting for
        // input to output delay to complete tests
        // metastability shift (2 FFs)
        for (int j = 0; j < 2; j++)
        {
            inputWriter.Write(processedInputWords);
            inputWriter.WriteLine();
        }
        // base delay
        inputWriter.Write(processedInputWords);
    }

    List<string> outputWordsOriginal = GetColumnsRegex().Split(outputs).ToList();
    List<string> outputWordsConv = Conversions.DoConversions(outputWordsOriginal);
    string processedOutputWords = string.Join(' ', outputWordsConv);
    for (int j = 0; i == 1 && j < 3; j++)
    {
        // add more (basically dummy) outputs to the start while waiting for
        // input to output delay to start tests
        // metastability shift (2 FFs) + base delay
        outputWriter.Write(processedOutputWords);
        outputWriter.WriteLine();
    }
    outputWriter.Write(processedOutputWords);
    if (i < lines.Length - 1)
    {
        outputWriter.WriteLine();
    }
}

partial class Program
{
    [GeneratedRegex(";|,")]
    private static partial Regex GetColumnsRegex();
}

partial class Program
{
    [GeneratedRegex(";;|,,")]
    private static partial Regex GetEmptyColumnRegex();
}

partial class Conversions
{
    /// <summary>
    /// Convert non binary numbers to binary.
    /// </summary>
    /// <param name="toBeChecked">The numbers as strings that may need to be converted to binary.</param>
    /// <returns>A new list full of binary digits.</returns>
    public static List<string> DoConversions(List<string> toBeChecked)
    {
        List<string> output = new();
        // check if any conversions need to be made before writing the data to the new file
        foreach (string word in toBeChecked)
        {
            if (word.EndsWith('d'))
            {
                // convert decimal number into binary digits
                int intWord = Convert.ToInt32(word[..^1]);
                string binaryWord = Convert.ToString(intWord, 2);

                Console.WriteLine($"Found: '{word}' -> Result: '{binaryWord}'");

                foreach (char binaryDigit in binaryWord)
                {
                    output.Add(binaryDigit.ToString());
                }
            }
            else
            {
                output.Add(word);
            }
        }
        return output;
    }
}