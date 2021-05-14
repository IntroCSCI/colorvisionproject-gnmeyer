
//Grant Meyer
#include <iostream>
#include <fstream>
#include <vector>
#include "colorclass.h"
using namespace std;

//After identifying all the colors in the file, find how many of them are unique colors and/or compare the colors to determine how hard they will be to distinguish from each other

void uniqueColor ( vector <string> &);
void distinguishColor ( vector <string> );
vector <string> openFile ( string );

int main()
{
  colorFunctions color;
  

  vector <string> FileColors;
  string filename;
  //bool isUnique;
  
  cout << "What file do you want to open?" << endl;
  cin >> filename;
  
  FileColors = openFile ( filename );

  uniqueColor ( FileColors );

  color.convertColors( FileColors );
 
  color.checkColorType();

  color.displayColorVectors();


  return 0;
}

vector <string> openFile ( string userInput ) {

  vector <string> colorsInFile;

  fstream reader;

  string line = "";

  reader.open(userInput, ios::in);

  if(reader.is_open()){

    while(!reader.eof()){

      getline(reader,line);

      colorsInFile.push_back(line);

      cout << "Your file contains: " << line << endl;
    }

    cout << endl;

    reader.close();

    } else {
      cout << "Could not open " << "'" << userInput << "', please try again." << endl;
    }

  return colorsInFile;
}

void uniqueColor ( vector <string> & Unique ) {
  
  for( int i = 0; i < Unique.size(); i ++ ) {

    for ( int j = i+1; j < Unique.size(); j++ ) {

      if( Unique[i] == Unique[j] ) {
        cout << Unique[i] << " is not a unique color." << endl;

        Unique.erase(Unique.begin()+j); 

        cout << endl;

      }
    }
  }

}
  
void distinguishColor ( vector <string> Distinguish ) {
  //
}
   