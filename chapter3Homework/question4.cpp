/*
Dyllan Castia
2/11/26
This program asks the user: 
1. Month 1's name
2. Month 1's rainfall amount
3. Month 2's name
4. Month 2's rainfall amount
5. Month 3's name
6. Month 3's rainfall amount
Then: 
1. Calculates average rainfall in the 3 months
2. Displays a message with the names of the month and the average rainfall total in inches
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <string>
using namespace std;

int main() {
    double month1Rain, month2Rain, month3Rain, averageRainfall;
    string month1, month2, month3;

    cout << "How many inches of rainfall in the last 3 months?" << endl;
    cout << "Give each month's name and rainfall amount:" << endl;
    cout << "Month 1 name: ";
    getline(cin, month1);
    cout << "Month 1 rainfall in inches: ";
    cin >> month1Rain;
    cin.ignore();
    cout << "Month 2 name: ";
    getline(cin, month2);
    cout << "Month 2 rainfall in inches: ";
    cin >> month2Rain;
    cin.ignore();
    cout << "Month 3 name: ";
    getline(cin, month3);
    cout << "Month 3 rainfall in inches: ";
    cin >> month3Rain;
    cin.ignore();
    averageRainfall = (month1Rain + month2Rain + month3Rain) / 3;
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3;
    cout << " is " << averageRainfall << " inches.";
    return 0;
}
/*
Output:
Give each month's name and rainfall amount:
Month 1 name: June
Month 1 rainfall in inches: 4.61
Month 2 name: July
Month 2 rainfall in inches: 5.23
Month 3 name: August 
Month 3 rainfall in inches: 3.56
The average rainfall for June, July, and August is 4.47 inches.
*/
