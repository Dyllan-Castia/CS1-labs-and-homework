/*
Dyllan Castia
01/30/26
Circuit Board Price:
This program calculates the selling price of a circuit board
based on its cost and a specified profit margin.
*/
#include <iostream>
using namespace std;

int main() {
    // Set output formatting for currency. (personal preference)
    cout.setf(ios::fixed);
    cout.precision(2);
    const double profitMargin = 0.35; // 35% profit margin
    const double circuitBoardCost = 14.95; // Cost of the circuit board.
    double sellingPrice = circuitBoardCost + (circuitBoardCost * profitMargin); // Calculate selling price.
    cout << "The selling price of the circuit board is: $" << sellingPrice << endl; // Display the selling price.
    return 0;
}
/*
Output:
The selling price of the circuit board is: $20.18
*/
