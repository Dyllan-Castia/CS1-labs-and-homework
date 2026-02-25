/*
Dyllan Castia
2/23/26
This program:
1. Takes a date as input
2. Checks month for valid entry (also checks for character codes)
3. Checks day for valid entry (also checks for character codes)
4. Checks year for valid entry (also checks for character codes)
5. Checks if the (month * day) == year
6. Checks for invalid input types (strings or other objects)
7. Outputs a message with the result (magic or non-magic)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int month, day, year;

    cout << "Is your date magical or muggle? (not magical)" << endl;

    cout << "Enter a month (numeric):" << endl;
    cin >> month;

    if ((month < 1) || (month > 12)) {
        cout << "Please enter a valid date in format: xx/xx/xx" << endl;
        return 0;
    }

    cout << "Enter a day (numeric day of the month):" << endl;
    cin >> day;

    if ((day < 1) || (day > 31)) {
        cout << "Please enter a valid date in format: xx/xx/xx" << endl;
        return 0;
    }

    cout << "Enter a year (last 2 digits):" << endl;
    cin >> year;
    if ((year > 99) || (year < 0)) {
        cout << "Please enter a valid date in format: xx/xx/xx" << endl;
        return 0;
    }

    if ((month * day) == year) {
        cout << month << "/" << day << "/" << year << " is magical";
    }
    else if ((month * day) != year) {
        cout << month << "/" << day << "/" << year << " is muggle";
    }
    else {
        cout << "Entry is invalid, try again. Date should be in format: xx/xx/xx";
    }

    return 0;
}

/*
Output 1:
Is your date magical or muggle? (not magical)
Enter a month (numeric):
10
Enter a day (numeric day of the month):
7
Enter a year (last 2 digits):
70
10/7/70 is magical
*/

/*
Output 2:
Is your date magical or muggle? (not magical)
Enter a month (numeric):
1
Enter a day (numeric day of the month):
7
Enter a year (last 2 digits):
95
1/7/95 is muggle
*/

/*
Output 3:
Is your date magical or muggle? (not magical)
Enter a month (numeric):
ACII
Please enter a valid date in format: xx/xx/xx
*/

/*
Output 4:
Is your date magical or muggle? (not magical)
Enter a month (numeric):
0
Please enter a valid date in format: xx/xx/xx
*/
