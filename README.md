Grant Meyer's Palette Analyzer

## Description

Evaluate a palette of colors to identify whether or not ts color combinations are problematic for people with color blindness

### v0.2 Updates

After identifying all the colors in the file, find how many of them are unique colors and/or compare the colors to determine how hard they will be to distinguish from each other.

I created a function called "openFile", which took the code from last version (opening the file) and stored it in a new vector I created called FileColors. It uses a string parameter.

I then created two more functions.
The first function is called uniqueColor. Its return type is bool. It takes the FileColor vector and scans it to determine if there are any colors that or duplicate, or "not unique". It then returns either true or false. It uses pass by reference and in the next version I will update it so it removes this duplicate value from the vector.

The next function does not do anything as of now. Its called distinguishColor, and it will scan the vector FileColors to determine if the colors are difficult to distinguish. It uses a vector as a parameter.


### v1.0 Updates

Added in a class that takes the colors and converts them into what base color they are. 


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
Your file contains: aliceblue
Your file contains: azure
Your file contains: cyan
Your file contains: dodgerblue
Your file contains: darkmagenta
Your file contains: deeppink
Your file contains: fuchsia
Your file contains: indigo
Your file contains: deeppink
Your file contains: indigo

deeppink is not a unique color.

indigo is not a unique color.

You have 0 'red' colors:

You have 0 'orange' colors:

You have 0 'yellow' colors:

You have 0 'green' colors:

You have 1 'cyan' colors:
    cyan

You have 1 'blue' colors:
    dodgerblue

You have 3 'purple' colors:
    darkmagenta
    fuchsia
    indigo

You have 1 'pink' colors:
    deeppink

You have 2 'white' colors:
    aliceblue
    azure

You have 0 'gray' colors:

You have 0 'brown' colors:

```

## C++ Guide

### Variables and Data Types
int main() variable and data types -
vector <string> FileColors;
string filename;
bool isUnique;

vector <string> openFile( string userInput ) variable and data types -
vector <string> colorsInFile;
string line;

### Console Input and Output

Input: 
color.txt
Output: 
Your file contains: aliceblue
Your file contains: azure
Your file contains: cyan
Your file contains: dodgerblue
Your file contains: darkmagenta
Your file contains: deeppink
Your file contains: fuchsia
Your file contains: indigo
Your file contains: deeppink
deeppink is not a unique color.
 
### Decisions

vector <string> openFile ( string userInput ): We check to see if the user input the correct filename, if they did we open the file and continue. If they didn't we display a message and kill the program.

### Iteration

vector <string> openFile (string userInput): We use a while loop to read the contents of the file our user inputed, scanning through it all until we reach the end while pushing each line back into the vector called colorsInFile. 

bool uniqueColor ( vector <string> & Unique ): We use a for loop to scan the contents of our vector. Inside that for loop is another for loop that is one value ahead of the previous for loop. It scans the vector again to see if the first value is ever equal to the new value again. If it is, we know there is a duplicate in the vector. It returns false if this is the case.

### File Input and Output

We ask the user to input a file name and use fstream to search for that file and open it. We scan the file with reader and output its contents. We also output if there is a duplicate in the color.txt file.

### Arrays/Vectors

int main(): 
vector <string> FileColors; - This holds the values of colors.txt, which contains a bunch of color values in the form of strings.

### Functions

bool uniqueColor ( vector <string> &); - this function scans the vector created in the openFile function to determine whether the colors within it are unique. It uses pass by reference to change the values of the original function. In the next update, it will remove the duplicate. Right now it pops back the last value. It returns bool because the colors are either unique or they arent, hence true or false.

void distinguishColor ( vector <string> ); - This function will determine whether the colors are easy to distinguish from eachother. It is a void value because it will cout statements and not return anything. The parameter is a vector because thats what we put into the function to scan.

vector <string> openFile ( string ); - This function opens the file that the user inputs and stores the values in a string. We use the string parameter because that is what the user inputs. It returns a vector.

### Classes

The class is called "colorFunctions", and it takes the files that we opened and does multiple things with it. It converts the colors from their names into what basic color they are in order to group and establish what would be problematic.
