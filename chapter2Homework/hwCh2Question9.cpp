/*
Dyllan Castia
01/30/26
Stock Commision:
This program calculates the total cost of purchasing stock including commission
and displays the breakdown.
*/
#include <iostream>
using namespace std;

int main() {
    const int sharesBought = 750; // Number of shares purchased.
    const double stockPriceAtPurchase = 35.00; // Price per share at purchase.
    const double commissionRate = 0.02; // Commission rate (2%).
    double totalSalePriceBeforeComm = sharesBought * stockPriceAtPurchase; // Total price before commission.
    double commisionPaidAtPurchase = totalSalePriceBeforeComm * commissionRate; // Commission paid at purchase.
    // Total purchase price including commission. |
    //                                            V
    double totalPurchasePrice = totalSalePriceBeforeComm + commisionPaidAtPurchase;
    // Display the results with two decimal places (personal preference).
    cout.setf(ios::fixed);
    cout.precision(2);
    // Output the breakdown of costs.
    cout << "Price of stock alone: $" << totalSalePriceBeforeComm << endl;
    cout << "Commission paid at purchase: $" << commisionPaidAtPurchase << endl;
    cout << "Total purchase price: $" << totalPurchasePrice << endl;
    return 0;
}
/*
Output:
Price of stock alone: $26250.00
Commission paid at purchase: $525.00
Total purchase price: $26775.00  
*/
