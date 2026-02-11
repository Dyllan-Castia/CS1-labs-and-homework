/*
Dyllan Castia
2/11/26
This program asks the user: 
1. Asks the user for 5 test scores
Then: 
1. Calculates and displays the average in a message.
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double test1, test2, test3, test4, test5, average; //define variables

    //vvvv prompt user for inputs(5) vvvv
    cout << "What were the test scores? (5 entries):" << endl;
    cin >> test1;
    cin >> test2;
    cin >> test3;
    cin >> test4;
    cin >> test5;
    average = (test1 + test2 + test3 + test4 + test5) / 5; //calculate average test score
    cout << setprecision(1) << fixed; // Format (1 decimal point)
    cout << "The average score for all the tests is: " << average << "/100.0"; //display message
    return 0;
}
/*
Output:
What were the test scores? (5 entries):
90
75.8
68
75.5
89.5
The average score for all the tests is: 79.8/100.0
*/
