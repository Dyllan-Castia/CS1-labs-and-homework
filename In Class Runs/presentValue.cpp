#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double presentValue(double, double, double);

int main() {

    double futureValue, rate, numYears;
    cout << "How much do you want to have saved in the future?" << endl;
    cin >> futureValue;
    cout << "What is the annual interest rate?" << endl;
    cin >> rate;
    cout << "How many years do you plan to let the money\n";
    cout << "sit in the account?" << endl;
    cin >> numYears;
    
    cout << fixed << setprecision(2);
    cout << "You need to deposit $" << presentValue(futureValue, rate, numYears);
    cout << " today in order to have $" << futureValue << " in " << numYears << " years.";
    
    return 0;
}

double presentValue(double f = 10500.0, double r = .05, double n = 1.0) {
    double present = f / pow((1 + r), n);
    return present;
}
