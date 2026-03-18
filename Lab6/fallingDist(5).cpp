/*
Dyllan Castia
3/9/26
This program:
1. Passes 1 - 10 as arguments to the fallingDistance() function
one at a time and
2. Gives a result of the calculated distance fallen after "count" seconds.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <cmath> //abs, cos, exp, fmod, log, log10, sin, sqrt, tan
using namespace std;

double fallingDistance(double);

int main() {
    int count;

    double distance = 0.0; //initialize distance

   for (count = 1; count <= 10; count++) {
    distance = fallingDistance(count);
    cout << fixed << setprecision(1);
    cout << "The distance fallen after " << count << " seconds is ";
    cout << distance << " meters.\n";
   }

   return 0;
}

double fallingDistance(double time) {
    double gravity = 9.8;
    return 0.5 * (gravity * (pow(time, 2)));
}

/*
Output:
The distance fallen after 1 seconds is 4.9 meters.
The distance fallen after 2 seconds is 19.6 meters.
The distance fallen after 3 seconds is 44.1 meters.
The distance fallen after 4 seconds is 78.4 meters.
The distance fallen after 5 seconds is 122.5 meters.
The distance fallen after 6 seconds is 176.4 meters.
The distance fallen after 7 seconds is 240.1 meters.
The distance fallen after 8 seconds is 313.6 meters.
The distance fallen after 9 seconds is 396.9 meters.
The distance fallen after 10 seconds is 490.0 meters.
*/
