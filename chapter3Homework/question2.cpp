/*
Dyllan Castia
2/11/26
This program asks the user: 
1. How many tickets of each class (A, B, and C) were sold.
Then: 
1. Calculates the dollar amount for each class.
2. Displays the amount of income generated for all tickets sold. 
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double classA, classB, classC, income;

    //vvvv user input prompts vvvv
    cout << "How many class A tickets did you sell? ";
    cin >> classA;
    cout << "How many class B tickets did you sell? ";
    cin >> classB;
    cout << "How many class C tickets did you sell? ";
    cin >> classC;
    income = (classA * 15.00) + (classB * 12.00) + (classC * 9.00); //calculate total income
    cout << showpoint << setprecision(2) << fixed; //format (show decimal point and two decimal spaces)
    cout << "You sold " << classA + classB + classC << " tickets total and generated $" << income << " of revenue!";
    return 0;
}
/*
Output:
How many class A tickets did you sell? 10
How many class B tickets did you sell? 25
How many class C tickets did you sell? 50
You sold 85.00 tickets total and generated $900.00 of revenue!
*/
