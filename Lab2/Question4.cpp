/*
Dyllan Castia
1/28/26
This program defines a meal price, sales tax, and tip percentage
and calculates the total bill and it's tax and tip then displays
them to the console.*/
#include <iostream>
using namespace std;

const double salesTax = 0.0675;
const double tip = 0.20;
const double mealPrice = 88.67;
double totalCost = 88.67 + (88.67 * salesTax) + (88.67 * tip);
double calculatedSalesTax = mealPrice * salesTax;
double calculatedTip = mealPrice * tip;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Sales Tax: $" << calculatedSalesTax << endl;
    cout << "tip: $" << calculatedTip << endl;
    cout << "Total Cost: $" << totalCost << endl;
    return 0;
}
/*
Meal Price: $88.67
Sales Tax: $5.99
tip: $17.73
Total Cost: $112.39
*/
