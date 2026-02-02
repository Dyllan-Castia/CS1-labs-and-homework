/*
Dyllan Castia
01/30/26
Land Calculation:
This program calculates the total number of acres
in a given land area measured in square feet.
*/
#include <iostream>
using namespace std;

int main() {
    // No formatting needed since it doesn't involve currency, mileage, or other personal preferences.
    const double acre = 43560.0; // define acre in square feet.
    const double landArea = 391876.0; // land area in square feet.
    double totalAcres = landArea / acre; // calculate total acres.
    cout << "Total acres in the land area: " << totalAcres << " acres" << endl; // output the result.
    return 0;
}
/*
Output:
Total acres in the land area: 8.99624 acres
*/
