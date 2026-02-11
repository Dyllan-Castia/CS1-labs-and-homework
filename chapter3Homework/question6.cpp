/*
Dyllan Castia
2/11/26
This program asks the user: 
1. How many cookies they would like to make.
Then: 
1. Displays a new recipe with quantities(in cups) of each ingredient they will need to make
that many cookies.
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double sugar, butter, flour, cookies;
    sugar = 0.03125;
    butter = 0.0208333333333333;
    flour = 0.0572916666666667;    

    cout << setprecision(3) << fixed;
    cout << "How many cookies would you like to make?" << endl;
    cin >> cookies;
    cout << "You need " << sugar * cookies << " cup(s) of sugar, ";
    cout << butter * cookies << " cup(s) of butter, and ";
    cout << flour * cookies << " cup(s) of flour to make " << cookies << " cookies.";
    return 0;
}
/*
Output:
How many cookies would you like to make?
23
You need 0.719 cup(s) of sugar, 0.479 cup(s) of butter, and 1.318 cup(s) of flour to make 23.000 cookies.
*/
