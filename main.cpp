//
//  main.cpp
//  Week4Prog5Rectangle
//
//  Created by Jackie on 2/13/21.
//

// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {
       int answer;
        // complete this function so the code works
        answer = width * height;
       return answer;
    }
};

void Rectangle::set_values (int x, int y) {
     // complete this function so the code works
    width = x;
    height = y;
}

int main () {  // Use this driver program
    cout << "Name: Jackie Ocaña - Prog5Rect - Date:  2/12/21" << endl;
    // Use set_values function to set values
    Rectangle rect1;
    rect1.set_values (5,6);
    cout << "area: " << rect1.area() << endl;
    
    // Use set_values function to set values
      Rectangle rect2;
      rect2.set_values (3,4);
      cout << "area: " << rect2.area() << endl; return 0; }
