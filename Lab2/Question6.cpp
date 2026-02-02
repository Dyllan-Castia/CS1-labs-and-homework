/*
Dyllan Castia
1/28/26
Lab 2 Question 6
This program calculates and displays the annual pay based
on a fixed pay amount and number of pay periods.
*/
#include <iostream>
using namespace std;

const double payAmount = 2200.0;
const int payPeriods = 26;
double annualPay = payAmount * payPeriods;

int main() 
{
    cout << "Annual Pay: $" << annualPay << endl;
    return 0;
}
//Annual Pay: $57200
