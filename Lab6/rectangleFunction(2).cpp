/*
Dyllan Castia
3/9/26
This program:
1. Asks user for length by calling getLength() function.
2. Asks user for width by cslling getWidth() function.
3. Calculates area by calling getArea(length, width) function.
4. Displays the 3 values by calling displayData(length, width, area) void function.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);
bool isValid(double);

int main() {
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   length = getLength();
   
   width = getWidth();
   
   area = getArea(length, width);
   
   displayData(length, width, area);
}

bool isValid(double value) {
    if (value < 0) {
        return false;
    }
    else {
        return true;
    }
}

double getLength() {
    double length;

    cout << "What is the length of the rectangle: ";
    cin >> length;

    while (!(isValid(length))) {
        cout << "Length cannot be negative!\nWhat is the length of the rectangle: ";
        cin >> length;
    }
    return length;
}

double getWidth() {
    double width;

    cout << "What is the width of the rectangle: ";
    cin >> width;

    while (!(isValid(width))) {
        cout << "Width cannot be negative!\nWhat is the width of the rectangle: ";
        cin >> width;
    }
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2);
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}

/*
Output: 
What is the length of the rectangle: 3
What is the width of the rectangle: 5
Length: 3.00
Width: 5.00
Area: 15.00
*/
