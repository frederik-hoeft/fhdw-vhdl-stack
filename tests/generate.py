import csv

# Define the header and initial rows (same as before)
header = [
    "format", "", "", "", "", "F::base_10:8", "",
    "", "", "F::base_10:8"
]
pins_row = [
    "pins", "push", "pop", "peek", "clear", "data_in", "", "full", "empty", "data_out"
]
clear_row1 = ["clear", "0", "0", "0", "1", "X", "", "0", "1", "X"]
clear_row2 = ["clear", "0", "0", "0", "1", "X", "", "0", "1", "X"]

# Initialize the test vector list
test_vectors = [header, pins_row, clear_row1, clear_row2]

# Generate the push and verify push test vectors
for i in range(0, 255):
    push_row = ["push " + str(i), "1", "0", "0", "0", str(i), "", "0", "0", "X"]
    verify_push_row = ["verify push", "0", "0", "1", "0", "X", "", "0", "0", str(i)]
    
    test_vectors.extend([push_row, verify_push_row])

# top entry causes full flag to be set
test_vectors.append(["push 255", "1","0","0","0","255","","1","0","X"])
test_vectors.append(["verify push", "0","0","1","0","X","","1","0","255"])
test_vectors.append(["verify full", "0","0","0","0","X","","1","0","X"])

# attempting to overflow the stack should be ignored
test_vectors.append(["attempt overflow", "1","0","0","0","32","","1","0","X"])
test_vectors.append(["verify didn't push", "0","0","1","0","X","","1","0","255"])

# Simulate popping and verifying the top 100 most entries
for i in range(0, 100):
    pop_row = ["pop " + str(255 - i), "0", "1", "0", "0", "X", "", "0", "0", str(255 - i)]
    test_vectors.append(pop_row)

# clear stack
test_vectors.append(["clear stack", "0","0","0","1","X","","0","1","X"])
test_vectors.append(["verify clear", "0","0","0","0","X","","0","1","X"])

# push/pop on clear stack
test_vectors.append(["push 15", "1", "0", "0", "0", "15", "", "0", "0", "X"])
test_vectors.append(["verify push", "0", "0", "1", "0", "X", "", "0", "0", "15"])
test_vectors.append(["pop 15", "0", "1", "0", "0", "X", "", "0", "1", "15"])
test_vectors.append(["verify clear", "0", "0", "0", "0", "X", "", "0", "1", "X"])

# push/pop at the same time
test_vectors.append(["push/pop at the same time", "1", "1", "0", "0", "15", "", "0", "0", "X"])

# push/clear at the same time
test_vectors.append(["push/clear at the same time", "1", "0", "0", "1", "15", "", "0", "1", "X"])

# everything at the same time
test_vectors.append(["everything at the same time", "1", "1", "1", "1", "15", "", "0", "1", "X"])

# push/pop on clear stack
test_vectors.append(["push 64", "1", "0", "0", "0", "64", "", "0", "0", "X"])
test_vectors.append(["verify push", "0", "0", "1", "0", "X", "", "0", "0", "64"])
test_vectors.append(["pop 64", "0", "1", "0", "0", "X", "", "0", "1", "64"])
test_vectors.append(["verify clear", "0", "0", "0", "0", "X", "", "0", "1", "X"])

# Write the test vectors to a CSV file
with open("tb.csv", mode="w", newline="") as file:
    writer = csv.writer(file)
    writer.writerows(test_vectors)
