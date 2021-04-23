
//Grant Meyer
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//After identifying all the colors in the file, find how many of them are unique colors and/or compare the colors to determine how hard they will be to distinguish from each other

bool uniqueColor ( vector <string> &);
void distinguishColor ( vector <string> );
vector <string> openFile ( string );

int main()
{
  vector <string> FileColors;
  string filename;
  bool isUnique;
  
  cout << "What file do you want to open?" << endl;
  cin >> filename;
  
  FileColors = openFile ( filename );

  isUnique = uniqueColor ( FileColors );

  // distinguishColor ( FileColors );

  return 0;
}

vector <string> openFile ( string userInput ) 
{
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
    reader.close();
  } else {
    cout << "Could not open " << "'" << userInput << "', please try again." << endl;
  }

  return colorsInFile;
}

bool uniqueColor ( vector <string> & Unique ) {
  
  for( int i = 0; i < Unique.size(); i ++ ) {

    for ( int j = i+1; j < Unique.size(); j++ ) {

      if( Unique[i] == Unique[j] ) {
        cout << Unique[i] << " is not a unique color." << endl;
        Unique.pop_back(); //editing later to pop back the duplicate.
        return false;
      }
    }
  }

  return true;

}
  
void distinguishColor ( vector <string> Distinguish ) {
  //
}
   