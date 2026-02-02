#include <iostream>
using namespace std;

double salesTax = 0.06;
const int cost = 95;
double totalTax = cost * salesTax;

int main() 
{
    cout << "The sales tax for an item that costs $" << cost;
    cout << " is $" << totalTax << "." << endl;
    return 0;
}
//The sales tax for an item that costs $95 is $5.7.
