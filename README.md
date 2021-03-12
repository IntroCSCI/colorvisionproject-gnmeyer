Grant Meyer's Palette Analyzer

## Description

Evaluate a palette of colors to identify whether or not ts color combinations are problematic for people with color blindness

### v0.2 Updates

Added in the file input and file - reading loop.

### v1.0 Updates

*Coming soon*


## Developer

Grant Meyer

## Example

To run the program, give the following commands:

Type in your file name, "color.txt" and watch as the values are inputed into the console

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
What file do you want to open?
color.txt
aliceblue
beige
blueviolet
deepskyblue
hotpink
```

## C++ Guide

### Variables and Data Types

string filename;
string line;

### Console Input and Output

Input: 
color.txt
Output: 
Your file contains: aliceblue
Your file contains: beige
Your file contains: blueviolet
Your file contains: deepskyblue
Your file contains: hotpink
 
### Decisions

We check to see if the user input the correct filename, if they did we open the file and continue. If they didn't we display a message and kill the program.

### Iteration

We use a while loop to read the contents of the file our user inputed, scanning through it all until we reach the end while outputing each line.

### File Input and Output

We ask the user to input a file name and use fstream to search for that file and open it. We scan the file with reader and output its contents.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
