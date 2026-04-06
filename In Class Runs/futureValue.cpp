#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double futureValue(double, double, double);

int main() {
    double presentValue, rate, months;

    cout << "What is the account's present value?" << endl;
    cin >> presentValue;
    cout << "What is the monthly interest rate?" << endl;
    cin >> rate;
    cout << "How many months will the money be left in the account?" << endl;
    cin >> months;

    cout << fixed << setprecision(2);
    cout << "The value of the account after " << months << " months is $";
    cout << futureValue(presentValue, rate, months) << endl;
    
    return 0;
}

double futureValue(double p, double r, double m) {
    double future = p * pow((1 + r), m);
    return future;
}
