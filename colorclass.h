//classes
#ifndef COLORCLASS_H
#define COLORCLASS_H
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class colorFunctions{
  private:

  
  vector <string> Red;
  vector <string> Orange;
  vector <string> Yellow;
  vector <string> Green;
  vector <string> Cyan;
  vector <string> Blue;
  vector <string> Purple;
  vector <string> Pink;
  vector <string> White;
  vector <string> Gray;
  vector <string> Brown;
    


  vector <string> preConvertedRed;
  vector <string> preConvertedOrange;
  vector <string> preConvertedYellow;
  vector <string> preConvertedGreen;
  vector <string> preConvertedCyan;
  vector <string> preConvertedBlue;
  vector <string> preConvertedPurple;
  vector <string> preConvertedPink;
  vector <string> preConvertedWhite;
  vector <string> preConvertedGray;
  vector <string> preConvertedBrown;
  

  vector <string> colorsConverted;

 

  vector <string> redVector = {"lightsamon","salmon","darksalmon","lightcoral","indianred","crimson","firebrick","red","darkred"};

  vector <string> orangeVector = {"coral","tomato","orangered","gold","orange","darkorange"};

  vector <string> yellowVector = {"lightyellow","lemonchiffon","lightgoldenrodyellow","papayawhip","moccasin","peachpuff","palegoldenrod","khaki","darkkhaki","yellow"};

  vector <string> greenVector = {"lawngreen","chartreuse","limegreen","lime","forestgreen","green","darkgreen","greenyellow","yellowgreen","springgreen","mediumspringgreen","lightgreen","palegreen","darkseagreen","mediumseagreen","seagreen","olive","darkolivegreen","olivedrab"};

  vector <string> cyanVector = {"lightcyan","cyan","aqua","aquamarine","mediumaquamarine","paleturquoise","turquoise","mediumturquoise","darkturquoise","lightseagreen","cadetblue","darkcyan","teal"};

  vector <string> blueVector = {"powderblue","lightblue","lightskyblue","skyblue","deepskyblue","lightsteelblue","dodgerblue","cornflowerblue","steelblue","royalblue","blue","mediumblue","darkblue","navy","midnightblue","mediumslateblue","slateblue","darkslateblue"};

  vector <string> purpleVector = {"lavender","thistle","plum","violet","orchid","fuchsia","magenta","mediumorchid","mediumpurple","blueviolet","darkviolet","darkorchid","darkmagenta","purple","indigo"};

  vector <string> pinkVector = {"pink","lightpink","hotpink","deeppink","palevioletred","mediumvioletred"};

  vector <string> whiteVector = {"white","snow","honeydew","mintcream","azure","aliceblue","ghostwhite","whitesmoke","seashell","beige","oldlace","floralwhite","ivory","antiquewhite","linen","lavenderblush","mistyrose"};

  vector <string> grayVector = {"gainsboro","lightgray","silver","darkgray","gray","dimgray","lightslategray","slategray","darkslategray","black"};

  vector <string> brownVector = {"cornsilk","blanchedalmond","bisque","navajowhite","wheat","burlywood","tan","rosybrown","sandybrown","goldenrod","peru","chocolate","saddlebrown","sienna","brown","maroon"};

  

  public:
    
    void checkColorType();

    void displayColorVectors();
    
    void convertColors(vector <string>);

};

#endif