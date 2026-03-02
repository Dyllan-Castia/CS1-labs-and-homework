/*
Dyllan Castia
2/25/26
This program:
1. Displays a table with the sea level rise every year over 25 years.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double seaLevel, rise;
    int count;
    count = 0;
    seaLevel = 0.0;
    rise = 1.5; //millimeters
    cout << fixed << setprecision(2);

    while (count <= 25) {
        cout << "Sea level rise year " << setw(2) << count << ":" << setw(10) << seaLevel  << "mm" << endl;
        seaLevel += rise;
        count++;
    }
    return 0;
}

/*
Ouput: 
Sea level rise year  0:      0.00mm
Sea level rise year  1:      1.50mm
Sea level rise year  2:      3.00mm
Sea level rise year  3:      4.50mm
Sea level rise year  4:      6.00mm
Sea level rise year  5:      7.50mm
Sea level rise year  6:      9.00mm
Sea level rise year  7:     10.50mm
Sea level rise year  8:     12.00mm
Sea level rise year  9:     13.50mm
Sea level rise year 10:     15.00mm
Sea level rise year 11:     16.50mm
Sea level rise year 12:     18.00mm
Sea level rise year 13:     19.50mm
Sea level rise year 14:     21.00mm
Sea level rise year 15:     22.50mm
Sea level rise year 16:     24.00mm
Sea level rise year 17:     25.50mm
Sea level rise year 18:     27.00mm
Sea level rise year 19:     28.50mm
Sea level rise year 20:     30.00mm
Sea level rise year 21:     31.50mm
Sea level rise year 22:     33.00mm
Sea level rise year 23:     34.50mm
Sea level rise year 24:     36.00mm
Sea level rise year 25:     37.50mm
*/
