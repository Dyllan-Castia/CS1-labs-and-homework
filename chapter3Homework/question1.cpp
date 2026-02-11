/*
Dyllan Castia
2/11/26
This program asks the user: 
1. how many gallons their gas tank can hold,
2. How many miles they can travel with full tank.
Then calculates and displays the miles per gallon.
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double gallons, travelDistance, mpg;
    cout << "How many gallons does your gas tank hold? ";
    cin >> gallons;
    cout << "How many miles can you travel with a full tank? ";
    cin >> travelDistance;
    mpg = travelDistance / gallons;
    cout << "Your car can travel " << mpg << " miles per gallon of gas.";
    return 0;
}
/*
output: 
How many gallons does your gas tank hold? 10
How many miles can you travel with a full tank? 390
Your car can travel 39 miles per gallon of gas.
*/
