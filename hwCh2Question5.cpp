/*
Dyllan Castia
01/29/26
Distance per Tank of Gas:
This program calculates the distance a car can travel
on a full tank of gas in both town and highway driving
*/
#include <iostream>
using namespace std;

int main() {
   const int gasTankCap = 20; // gas tank capacity in gallons
   double mpgTown = 23.5; // miles per gallon while driving in town.
   double mpgHighway = 28.9; // miles per gallon while driving on highway.
   double distanceTown = gasTankCap * mpgTown; // calculate distance can travel in town.
   double distanceHighway = gasTankCap * mpgHighway; // calculate distance can travel on highway.
   // set output format to display one decimal point.
   cout.setf(ios::fixed);
   cout.precision(1);
   //display results.
   cout << "Distance can travel in town: " << distanceTown << " miles" << endl;
   cout << "Distance can travel on highway: " << distanceHighway << " miles" << endl;
    return 0; 
}
/*
Distance can travel in town: 470.0 miles
Distance can travel on highway: 578.0 miles
*/
