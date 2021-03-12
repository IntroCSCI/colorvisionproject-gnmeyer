
//Grant Meyer
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

  //I might end up switching to Pallete generator if my group is okay with it
  fstream reader;
  string filename;
  string line = "";

  //get input
  cout << "What file do you want to open?" << endl;
  cin >> filename;

  //open file
  reader.open(filename, ios::in);

  if(reader.is_open()){
    while(!reader.eof()){
      getline(reader,line);
      cout << "Your file contains: " << line << endl;
    }
    reader.close();
  } else {
    cout << "Could not open " << "'" << filename << "', please try again." << endl;
  }





  return 0;
}
