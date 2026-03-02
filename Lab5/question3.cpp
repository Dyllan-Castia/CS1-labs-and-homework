/*
Dyllan Castia
2/25/26
This program:
1. Displays an announcement: yearly price increase.
2. Displays the price increase after each year for 6 years.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double rate, price;
    int year;

    rate = .04; //4%
    price = 2500.00;
    year = 0;

    cout << fixed << setprecision(2);
    cout << "Attention: The country club will be increasing it's membership"; 
    cout <<  " price by 4% each year for the next 6 years.\n";

    while (year <= 6) {
        cout << "Price for year" << setw(2) << year << ":" << setw(6) << "$" << price << endl;
        price += price * rate;
        year++;
    }

    return 0;
}

/*
Output:
Attention: The country club will be increasing it's membership price by 4% each year for the next 6 years.
Price for year 0:     $2500.00
Price for year 1:     $2600.00
Price for year 2:     $2704.00
Price for year 3:     $2812.16
Price for year 4:     $2924.65
Price for year 5:     $3041.63
Price for year 6:     $3163.30
*/
