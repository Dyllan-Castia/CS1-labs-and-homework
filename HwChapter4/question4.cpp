/*
Dyllan Castia
2/23/26
This program:
1. Takes length and width for 1 rectangle
2. Length and width for another rectangle
3. calculates the area of both rectangles
4. runs comparisons on the rectacgles
5. Displays the result message.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rectangle1, rectangle2, length1, width1, length2, width2;

    //Rectangle 1
    cout << "Lets find out which rectangle is bigger." << endl;
    cout << "Rectangle 1 area." << endl;
    cout << "Enter the length of rectange 1: ";
    cin >> length1;
    cout << "Enter the width of rectangle 1: ";
    cin >> width1;

    //Rectangle 2
    cout << "Rectangle 2 area." << endl;
    cout << "Enter the length of rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of rectangle 2: ";
    cin >> width2;

    //Calculations for area
    rectangle1 = length1 * width1;
    rectangle2 = length2 * width2;

    cout << fixed << setprecision(2);
    cout << "Rectangle 1's area is: " << rectangle1 << endl;
    cout << "Rectangle 2's area is: " << rectangle2 << endl;

    //Decision tree
    if (rectangle1 < rectangle2) {
        cout << "Rectangle 1 is smaller than rectangle 2." << endl;
    }
    else if (rectangle1 > rectangle2) {
        cout << "Rectangle 1 is bigger than rectangle 2." << endl;
    }
    else {
        cout << "Rectangle 1 and rectangle 2 are equal size." << endl;
    }
    
    cout << "Now you know how your rectangles compare!";

    return 0;

}

/*
Output 1:
Lets find out which rectangle is bigger.
Rectangle 1 area.
Enter the length of rectange 1: 25.6
Enter the width of rectangle 1: 30.8
Rectangle 2 area.
Enter the length of rectangle 2: 12.92
Enter the width of rectangle 2: 16.456
Rectangle 1's area is: 788.48
Rectangle 2's area is: 212.61
Rectangle 1 is bigger than rectangle 2.
Now you know how your rectangles compare!
*/
