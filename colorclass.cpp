#include "colorclass.h"
#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;


void colorFunctions::checkColorType(){


  for (int i = 0; i < colorsConverted.size(); i ++ ) {

    if (colorsConverted[i] == "red") {

      Red.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "orange") {
      
      Orange.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "yellow") {
      
      Yellow.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "green") {
      
      Green.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "cyan") {
      
      Cyan.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "blue") {
      
      Blue.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "purple") {
      
      Purple.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "pink") {
      
      Pink.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "white") {
      
      White.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "gray") {
      
      Gray.push_back(colorsConverted[i]);

    };

    if (colorsConverted[i] == "brown") {
      
      Brown.push_back(colorsConverted[i]);

    };












  }
  
}

void colorFunctions::displayColorVectors() {

    int redAmount = Red.size();
    
    cout << "You have " << redAmount << " 'red' colors:" << endl;

    for (int i = 0; i < preConvertedRed.size(); i ++ ) {
    
    cout << "    " << preConvertedRed[i] << endl;

    }
    
    cout << endl;



    int orangeAmount = Orange.size();
    
    cout << "You have " << orangeAmount << " 'orange' colors:" << endl;

    for (int i = 0; i < preConvertedOrange.size(); i ++ ) {
    
    cout <<  "    " << preConvertedOrange[i] << endl;

    }

    cout << endl;



    int yellowAmount = Yellow.size();
    
    cout << "You have " << yellowAmount << " 'yellow' colors:" << endl;

    for (int i = 0; i < preConvertedYellow.size(); i ++ ) {
    
    cout <<  "    " << preConvertedYellow[i] << endl;

    }

    cout << endl;



    int greenAmount = Green.size();
    
    cout << "You have " << greenAmount << " 'green' colors:" << endl;

    for (int i = 0; i < preConvertedGreen.size(); i ++ ) {
    
    cout <<  "    " << preConvertedGreen[i] << endl;

    }

    cout << endl;



    int cyanAmount = Cyan.size();
    
    cout << "You have " << cyanAmount << " 'cyan' colors:" << endl;

    for (int i = 0; i < preConvertedCyan.size(); i ++ ) {
    
    cout <<  "    " << preConvertedCyan[i] << endl;

    }

    cout << endl;



    int blueAmount = Blue.size();
    
    cout << "You have " << blueAmount << " 'blue' colors:" << endl;

    for (int i = 0; i < preConvertedBlue.size(); i ++ ) {
    
    cout <<  "    " << preConvertedBlue[i] << endl;

    }

    cout << endl;



    int purpleAmount = Purple.size();
    
    cout << "You have " << purpleAmount << " 'purple' colors:" << endl;

    for (int i = 0; i < preConvertedPurple.size(); i ++ ) {
    
    cout <<  "    " << preConvertedPurple[i] << endl;

    }

    cout << endl;



    int pinkAmount = Pink.size();
    
    cout << "You have " << pinkAmount << " 'pink' colors:" << endl;

    for (int i = 0; i < preConvertedPink.size(); i ++ ) {
    
    cout <<  "    " << preConvertedPink[i] << endl;

    }

    cout << endl;



    int whiteAmount = White.size();
    
    cout << "You have " << whiteAmount << " 'white' colors:" << endl;

    for (int i = 0; i < preConvertedWhite.size(); i ++ ) {
    
    cout << "    " << preConvertedWhite[i] << endl;

    }

    cout << endl;



    int grayAmount = Gray.size();
    
    cout << "You have " << grayAmount << " 'gray' colors:" << endl;

    for (int i = 0; i < preConvertedGray.size(); i ++ ) {
    
    cout <<  "    " << preConvertedGray[i] << endl;

    }

    cout << endl;



    int brownAmount = Brown.size();
    
    cout << "You have " << brownAmount << " 'brown' colors:" << endl;

    for (int i = 0; i < preConvertedBrown.size(); i ++ ) {
    
    cout << "    " << preConvertedBrown[i] << endl;

    }

    cout << endl;

    


}

void colorFunctions::convertColors(vector <string> colors) {

  for (int i = 0; i < colors.size(); i ++ ) {

    
      /*red*/ for (int r = 0; r < redVector.size(); r ++ ) {  

        if (colors[i] == redVector[r]) {

          preConvertedRed.push_back(colors[i]);

          string red = "red";

          colorsConverted.push_back(red);
          
        }
      } 


      /*orange*/ for (int o = 0; o < orangeVector.size(); o ++ ) {  

        if (colors[i] == orangeVector[o]) {

          preConvertedOrange.push_back(colors[i]);

          string orange = "orange";

          colorsConverted.push_back(orange);
          
        }
      } 


      /*yellow*/ for (int y = 0; y < yellowVector.size(); y ++ ) {  

        if (colors[i] == yellowVector[y]) {

          preConvertedYellow.push_back(colors[i]);

          string yellow = "yellow";

          colorsConverted.push_back(yellow);
          
        }
      } 


      /*green*/ for (int g = 0; g < greenVector.size(); g ++ ) {  

        if (colors[i] == greenVector[g]) {

          preConvertedGreen.push_back(colors[i]);

          string green = "green";

          colorsConverted.push_back(green);
          
        }
      } 

      
      /*cyan*/ for (int c = 0; c < cyanVector.size(); c ++ ) {  

        if (colors[i] == cyanVector[c]) {

          preConvertedCyan.push_back(colors[i]);

          string cyan = "cyan";

          colorsConverted.push_back(cyan);
          
        }
      } 


      /*blue*/ for (int b = 0; b < blueVector.size(); b ++ ) {  

        if (colors[i] == blueVector[b]) {

          preConvertedBlue.push_back(colors[i]);

          string blue = "blue";

          colorsConverted.push_back(blue);

        }
      } 

    
      /*purple*/ for (int p = 0; p < purpleVector.size(); p ++ ) {  

        if (colors[i] == purpleVector[p]) {

          preConvertedPurple.push_back(colors[i]);

          string purple = "purple";

          colorsConverted.push_back(purple);
          
        }
      } 

      /*pink*/ for (int p = 0; p < pinkVector.size(); p ++ ) {  

        if (colors[i] == pinkVector[p]) {

          preConvertedPink.push_back(colors[i]);

          string pink = "pink";

          colorsConverted.push_back(pink);
          
        }
      } 


      /*white*/ for (int w = 0; w < whiteVector.size(); w ++ ) {  

        if (colors[i] == whiteVector[w]) {

          preConvertedWhite.push_back(colors[i]);

          string white = "white";

          colorsConverted.push_back(white);
          
        }
      } 

      /*gray*/ for (int g = 0; g < grayVector.size(); g ++ ) {  

        if (colors[i] == grayVector[g]) {

          preConvertedGray.push_back(colors[i]);

          string gray = "gray";

          colorsConverted.push_back(gray);
          
        }
      } 

      /*brown*/ for (int b = 0; b < brownVector.size(); b ++ ) {  

        if (colors[i] == brownVector[b]) {

          preConvertedBrown.push_back(colors[i]);

          string brown = "brown";

          colorsConverted.push_back(brown);
          
        }
      } 





  }

}

/*void colorFunctions::display() {

  for (int i = 0; i < colorsConverted.size(); i ++ ) {

    cout << colorsConverted[i] << endl;

  }

}*/