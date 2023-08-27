# Datenblatt
Dieses Dokument liefert eine kurze technische Übersicht des VHDL Stacks.

## Besonderheiten
- alle kommentare überschauen und evtl dokumentieren 

### Eigenschaften
Die maximale Taktfrequenz wurde durch manuelles Testen ermittelt und liegt für den Stack bei 155.72 MHz.
- Power Analyse

## Portübersicht
Die zur Verfügung stehenden Ports sind in der folgenden Tabelle abgebildet. Alle Pins sind high-aktiv.

| Typ | Name | Beschreibung | Wortbreite |
|-|-|-|-|-|
| In | clk | Clock | 1 |
| In | push | Push Operation | 1 |
| In | pop | Pop Operation | 1 |
| In | clear | Clear Operation | 1 |
| In | peek | Peek Operation | 1 |
| In | din | Data In | 8 |
| Out | dout | Data Out | 8 |
| Out | full | Full Flag | 1 |
| Out | empty | Empty Flag | 1 |

- blockschaltbild
