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

colorFunctions color; - this is establishing an instance of my colorFunctions class and allowing me to use it using "color.".

vector <string> FileColors; - This is a vector that we store our values from the file we open in.

string filename; - this is the string that will hold the name of the file we want to open.


vector <string> Red; -> vector <string> Brown; - These vectors hold the amount of converted colors.

vector <string> preConvertedRed; -> vector <string> preConvertedBrown; - These vectors hold the colors before they were converted.

vector <string> colorsConverted; - This vector holds the total amount of converted colors, regardless about what type of color they are.

vector <string> redVector -> vector <string> brownVector - These vectors are pre-established and group the svg named colors based on their base color. This is the data that we use when converting the colors.

### Console Input and Output

Input -

The program asks us to open a file. It is assumed that the user already has a file they want to open. I have included two files, color.txt and color2.txt. These each have different color values. The user can select either one of them. 


Output -

The output displays the colors in the file. It then tells us whether there are any duplicate colors. It then shows you how many of those colors are red, green, blue, etc. and lists the colors below.


 
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

bool uniqueColor ( vector <string> &); - this function scans the vector created in the openFile function to determine whether the colors within it are unique. It uses PASS BY REFERENCE to change the values of the original function. It then removes the duplicate from the vector.


vector <string> openFile ( string ); - This function opens the file that the user inputs and stores the values in a string. We use the string parameter because that is what the user inputs. It returns a vector.

checkColorType - This function scans our colorsConverted vector, counting each value and adding it to its respective vector, Red, Green, Blue, etc.

displayColorVectors - This function counts the size of our converted color vectors. It then displays that amount as an integer. It then goes through that colors pre converted vector to display the names of the color values before they were converted.

convertColors - This function converts our svg named color value into its base color. It scans our vector that we got from the file we openened. It scans through the file and checks to see if the named values match up to our color vectors I establish in our private colorFunctions class. It then creates a string with "red" , "blue" , "green" , etc. and pushing that value back into another vector called colorsConverted.

### Classes

The class is called "colorFunctions", and it takes the files that we opened and converts the colors from their names into what basic color they are in order to group and establish what would be problematic.
