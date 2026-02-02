/*
Dyllan Castia
01/29/26
Total Purchase:
This program calculates the total amount 
due for a purchase including sales tax.
*/
#include <iostream>
using namespace std;

int main() {
    // Declare price variables.
    double price1 = 15.95;
    double price2 = 24.95;
    double price3 = 6.95;
    double price4 = 12.95;
    double price5 = 3.95;
    // Calculate subtotal.
    double subtotal = price1 + price2 + price3 + price4 + price5;
    // Calculate sales tax.
    double salesTaxRate = 0.07;
    // Calculate total sales tax.
    double totalTax = subtotal * salesTaxRate;
    //Set the output formatting to display two decimal places.
cout.setf(ios::fixed);
cout.precision(2);
// Display itemized list.    
cout << "Shampoo: " << price1 << endl;
cout << "Vitamins: " << price2 << endl;
cout << "Cheese: " << price3 << endl;
cout << "Beer: " << price4 << endl;
cout << "Strawberries: " << price5 << endl;  
// Display subtotal, total sales tax, and total amount due.  
cout << "Subtotal: $" << subtotal << endl;    
cout << "Total sales tax: $" << totalTax << endl;
cout << "Total amount due: $" << subtotal + totalTax << endl;
    return 0;
}
/*
Output:
Shampoo: 15.95
Vitamins: 24.95
Cheese: 6.95
Beer: 12.95
Strawberries: 3.95
Subtotal: $64.75
Total sales tax: $4.53
Total amount due: $69.28
*/
