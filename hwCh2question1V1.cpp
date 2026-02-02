/*
Dyllan Castia
01/29/26
Ocean Levels:
This program calculates the rise in 
ocean levels over a given number of years, 
assuming a constant annual rise.
*/
#include <iostream>
using namespace std;

int main() {
double currentSeaLevel = 0.0; // initialize current sea level.
const double annualRise = 1.5; // annual rise in millimeters.
cout << "Enter the number of years: "; // prompt user for input.
int years = 0; // variable to store user input.
cin >> years; // read user input.
cout << "In " << years << " years, the sea level will be ";
cout << currentSeaLevel + (annualRise * years); // calculate and display future sea level.
cout << " millimeters higher." << endl;
return 0;
} 
/*
input: 5
output: In 5 years, the sea level will be 7.5 
millimeters higher.
input: 7
output: In 7 years, the sea level will be 10.5 
millimeters higher.
input: 10
output: In 10 years, the sea level will be 15 
millimeters higher.
input: 155
output: In 155 years, the sea level will be 
232.5 millimeters higher.

Not what the hw asked for so I will include
another version in a seperate file.:
*/
