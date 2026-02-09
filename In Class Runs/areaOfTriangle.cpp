//Calculate the area of a triangle with user input.
#include <iostream>
using namespace std;

int main() {
    //vvvv Enter code here vvvv
    double base, height;
    cout << "This program calculates the area of a triangle." << endl;
    cout << "Enter the base of the triangle then a space then the height of the triangle." << endl;
    cin >> base >> height;
    cout << "The area of your triangle is: " << 0.5 * (base * height) << endl;
    return 0;
}
