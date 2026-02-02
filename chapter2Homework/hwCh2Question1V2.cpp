/*
Dyllan Castia
01/29/26
Ocean Levels
This program calculates the rise in 
sea level over a period of years.
*/
#include <iostream>
using namespace std;

int main() {
double currentSeaLevel = 0.0; // initialize current sea level.
const double annualRise = 1.5; // annual rise in millimeters.
int years = 5; // number of years to calculate rise for.
cout << "In 5 years, the sea level will be ";
cout << currentSeaLevel + (annualRise * years); // calculate sea level rise.
cout << " millimeters higher." << endl;
years = 7; // update years to 7.
cout << "In 7 years, the sea level will be ";
cout << currentSeaLevel + (annualRise * years);
cout << " millimeters higher." << endl;
years = 10; // update years to 10.
cout << "In 10 years, the sea level will be ";
cout << currentSeaLevel + (annualRise * years);
cout << " millimeters higher." << endl;
return 0;
} 
/*
In 5 years, the sea level will be 7.5 
millimeters higher.
In 7 years, the sea level will be 10.5 
millimeters higher.
In 10 years, the sea level will be 15 
millimeters higher.
*/
