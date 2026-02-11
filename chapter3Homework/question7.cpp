/*
Dyllan Castia
2/11/26
This program asks the user: 
1. For the Movie name
2. Amount of adult tickets sold
3. Amount of child tickets sold
Then: 
1. Displays the movie name
2. Displays the number of adult tickets sold
3. Displays the number of child tickets sold
4. Calculates and displays the gross profit for all tickets sold
5. Calculates and displays the net profit for the box office
6. Calculates and displays the distributers fee
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <string>
using namespace std;

int main() {
    // vvv Define variables vvv
    double childPrice, 
    adultPrice, 
    childTickets, 
    adultTickets,
    grossProfit,
    netProfit,
    paidToDistributer;
    string movieName;
    double distributerFee = 0.8;
    // ^^^ Define variables ^^^

    cout << "What is the name of the movie?" << endl;
    getline(cin, movieName);
    cout << "How many adult tickets were sold?" << endl;
    cin >> adultTickets;
    cout << "How many child tickets were sold?" << endl;
    cin >> childTickets;
    
    //vvv Calculations vvv
    adultPrice = adultTickets * 10.0;
    childPrice = childTickets * 6.0;
    grossProfit = adultPrice + childPrice;
    netProfit = grossProfit - (grossProfit * distributerFee);
    paidToDistributer = grossProfit * distributerFee;
    //^^^ Calculations ^^^

    //vvv Display message vvv
    cout << "Movie Name: " << movieName << endl;
    cout << "Adult Tickets Sold: " << adultTickets << endl;
    cout << "Child Tickets Sold: " << childTickets << endl;
    cout << showpoint << setprecision(2) << fixed;
    cout << "Gross Box Office Profit: $" << grossProfit << endl;
    cout << "Net Box Office Profit: $" << netProfit << endl;
    cout << "Amount Paid to Distributor: $" << paidToDistributer;
    return 0;
}
/*
Output:
What is the name of the movie?
The Programmer
How many adult tickets were sold?
256
How many child tickets were sold?
100
Movie Name: The Programmer
Adult Tickets Sold: 256
Child Tickets Sold: 100
Gross Box Office Profit: $3160.00
Net Box Office Profit: $632.00
Amount Paid to Distributor: $2528.00
*/
