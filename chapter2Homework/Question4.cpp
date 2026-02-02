/*
Dyllan Castia
01/29/26
Miles per Gallon:
This program calculates and displays 
the miles per gallon
*/
#include <iostream>
using namespace std;

int main() {
    int gasTank = 15; // gas tank capacity in gallons
    int milesDriven = 375; // miles driven on a full tank
    int milesPerGallon = milesDriven / gasTank; // calculate miles per gallon
    cout << "Miles per gallon: " << milesPerGallon << endl; // display the result
    return 0;
}
/*
Output:
Miles per gallon: 25
*/
