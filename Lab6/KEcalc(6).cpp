/*
Dyllan Castia
3/9/26
This program:
1. Asks the user for the mass of an object, and the velocity it is traveling.
2. Calculates the kinetic energy by passing the mass and velocity
to the kineticEnergy() function.
3. Displays a message with the calculated KE.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <cmath> //pow, abs, cos, exp, fmod, log, log10, sin, sqrt, tan
using namespace std;

double kineticEnergy(double, double);

int main() {
   double mass, velocity;

   cout << "What is the mass of the object: ";
   cin >> mass;

   while (mass <= 0) {
    cout << "Mass cannot be negative or 0!\nWhat is the mass of the object: ";
    cin >> mass;
   }

   cout << "What is the velocity of the object: ";
   cin >> velocity;

   while (velocity < 0) {
    cout << "Velocity cannot be negative!\nWhat is the velocity of the object: ";
    cin >> velocity;
   }

   cout << fixed << setprecision(1);
   cout << "The Kinetic energy your object holds is: " << kineticEnergy(mass, velocity);
   cout << " Joules\n";
}

double kineticEnergy(double m, double v) {
    return 0.5 * (m * (pow(v, 2)));
}

/*
Output:
What is the mass of the object: 0
Mass cannot be negative or 0!
What is the mass of the object: 12
What is the velocity of the object: -1
Velocity cannot be negative!
What is the velocity of the object: 3
The Kinetic energy your object holds is: 54.0 Joules
*/
