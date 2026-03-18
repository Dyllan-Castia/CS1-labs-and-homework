/*
Dyllan Castia
3/9/26
This program:
1. Passes numbers 0 - 20 as arguments to celcius() function one
at a time in a loop.
2. Displays a message with the temperature conversion for each temperature.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

double celsius(double);

int main() {
   int tempInFahrenheit;

   for (tempInFahrenheit = 0; tempInFahrenheit <= 20; tempInFahrenheit++) {
     double tempInCelsius;

     tempInCelsius = celsius(tempInFahrenheit);
     cout << fixed << setprecision(1);
     cout << tempInFahrenheit << " degrees Fahrenheit is equal to " << tempInCelsius;
     cout << " degrees Celsius." << endl; 
   }
}

double celsius(double f) {
    return (5.0 / 9.0) * (f - 32);
}

/*
Output: 
0 degrees Fahrenheit is equal to -17.8 degrees Celsius.
1 degrees Fahrenheit is equal to -17.2 degrees Celsius.
2 degrees Fahrenheit is equal to -16.7 degrees Celsius.
3 degrees Fahrenheit is equal to -16.1 degrees Celsius.
4 degrees Fahrenheit is equal to -15.6 degrees Celsius.
5 degrees Fahrenheit is equal to -15.0 degrees Celsius.
6 degrees Fahrenheit is equal to -14.4 degrees Celsius.
7 degrees Fahrenheit is equal to -13.9 degrees Celsius.
8 degrees Fahrenheit is equal to -13.3 degrees Celsius.
9 degrees Fahrenheit is equal to -12.8 degrees Celsius.
10 degrees Fahrenheit is equal to -12.2 degrees Celsius.
11 degrees Fahrenheit is equal to -11.7 degrees Celsius.
12 degrees Fahrenheit is equal to -11.1 degrees Celsius.
13 degrees Fahrenheit is equal to -10.6 degrees Celsius.
14 degrees Fahrenheit is equal to -10.0 degrees Celsius.
15 degrees Fahrenheit is equal to -9.4 degrees Celsius.
16 degrees Fahrenheit is equal to -8.9 degrees Celsius.
17 degrees Fahrenheit is equal to -8.3 degrees Celsius.
18 degrees Fahrenheit is equal to -7.8 degrees Celsius.
19 degrees Fahrenheit is equal to -7.2 degrees Celsius.
20 degrees Fahrenheit is equal to -6.7 degrees Celsius.
*/
