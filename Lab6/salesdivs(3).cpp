/*
Dyllan Castia
3/9/26
This program:
1. Asks the user for the sales figure for each division.
2. Calculates the highest sales. (checks for negative entry)
3. Displays a message with the winner's name and sales figure.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main() {
   string ne, nw, se, sw;
   double neSales, nwSales, seSales, swSales;

   //vvv Define division name string vvv
    ne = "North East Sales Division";
    nw = "North West Sales Division";
    se = "South East Sales Division";
    sw = "South West Sales Division";

    //vv Prompts the user for (division argument's) figure vv
    neSales = getSales(ne);
    nwSales = getSales(nw);
    seSales = getSales(se);
    swSales = getSales(sw);

    findHighest(neSales, nwSales, seSales, swSales); 
    //Finds the winning division and displays message.

}

double getSales(string division) {
    double sales;
    cout << "What was the " << division << "'s quarterly sales: ";
    cin >> sales;

    while (sales < 0) {
        cout << "Answer cannot be negative!\nWhat was the ";
        cout << division << "'s quarterly sales: ";
        cin >> sales;
    }
    return sales;
}

void findHighest(double sales1, double sales2, double sales3, double sales4) {
    double result = sales1;
    string ne = "North East Sales Division";
    string nw = "North West Sales Division";
    string se = "South East Sales Division";
    string sw = "South West Sales Division";
    string winner = ne;

    if (sales2 > result) {
        result = sales2;
        winner = nw;
    }

    if (sales3 > result) {
        result = sales3;
        winner = se;
    }

    if (sales4 > result) {
        result = sales4;
        winner = sw;
    }

    cout << fixed << setprecision(2);
    cout << "The division with the highest sales this quarter is:" << endl;
    cout << "The " << winner << " with: $" << result << " in sales!\n";
}

/*
Output 1: 
What was the North East Sales Division's quarterly sales: 2400
What was the North West Sales Division's quarterly sales: 2500
What was the South East Sales Division's quarterly sales: 3600
What was the South West Sales Division's quarterly sales: 2200
The division with the highest sales this quarter is:
The South East Sales Division with: $3600.00 in sales!

Output 2:
What was the North East Sales Division's quarterly sales: -1
Answer cannot be negative!
What was the North East Sales Division's quarterly sales: 1
What was the North West Sales Division's quarterly sales: -2
Answer cannot be negative!
What was the North West Sales Division's quarterly sales: 2
What was the South East Sales Division's quarterly sales: -3
Answer cannot be negative!
What was the South East Sales Division's quarterly sales: 3
What was the South West Sales Division's quarterly sales: -4
Answer cannot be negative!
What was the South West Sales Division's quarterly sales: 4
The division with the highest sales this quarter is:
The South West Sales Division with: $4.00 in sales!
*/
