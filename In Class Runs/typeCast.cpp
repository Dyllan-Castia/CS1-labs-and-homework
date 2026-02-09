//Type cast syntax is displayed on line 16
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//vvvvEnter code here.vvvv
    int books;
    int months;
    double perMonth;

    cout << "How many books do you plan to read?" << endl;
    cin >> books;
    cout << "How many months will it take you to read them>" << endl;
    cin >> months;
    perMonth = static_cast<double>(books) / months;
    cout << "That is " << perMonth << " books per month." << endl;
    return 0;
}
