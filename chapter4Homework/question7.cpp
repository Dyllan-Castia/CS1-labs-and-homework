/*
Dyllan Castia
2/23/26
This program:
1. Asks the user how many seconds they want to check.
2. Checks for valid input
3. Uses a decision tree to calculate number of days (if any) hours (if any)
minutes (if any) and seconds there are in the entry.
4. Displays a result message
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int finalSeconds, globalSeconds;

    cout << "How many seconds are you checking?" << endl;
    cin >> globalSeconds;
    finalSeconds = globalSeconds;

    if (globalSeconds <= 0) {
        cout << "Invalid entry. Try again.";
        return 0;
    }

    if (globalSeconds < 60) {
        int seconds = globalSeconds;
        cout << "There is " << seconds << " second(s).";
    }
    else if (globalSeconds == 60) {
        int minutes = globalSeconds / 60;
        cout << "There is " << minutes << " minute in 60 seconds.";
    }
    else if ((globalSeconds > 60) && (globalSeconds < 3600)) {
        int minutes = globalSeconds / 60;
        int seconds = globalSeconds % 60;
        cout << "There is " << minutes << " minute(s), and " << seconds << " second(s) in " << finalSeconds;
        cout << " seconds.";
    }
    else if ((globalSeconds > 3600) && (globalSeconds < 86400)) {
        int hours = globalSeconds / 3600;
        globalSeconds %= 3600;
        int minutes = globalSeconds / 60;
        globalSeconds %= 60;
        int seconds = globalSeconds;
        cout << "There is " << hours << " hour(s), " << minutes << " minute(s), and " << seconds;
        cout << " second(s) in " << finalSeconds << " seconds.";
    }
    else {
        int days = globalSeconds / 86400;
        globalSeconds %= 86400;
         int hours = globalSeconds / 3600;
        globalSeconds %= 3600;
        int minutes = globalSeconds / 60;
        globalSeconds %= 60;
        int seconds = globalSeconds;
        cout << "There is " << days << " day(s), " << hours << " hour(s), " << minutes;
        cout << " minute(s), and " << seconds << " second(s)" << " in " << finalSeconds;
        cout << " seconds.";
    }
    return 0;
}

/*
Output1: 
How many seconds are you checking?
123456789
There is 1428 day(s), 21 hour(s), 33 minute(s), and 9 second(s) in 123456789 seconds.
*/

/*
Output2:
How many seconds are you checking?
90062
There is 1 day(s), 1 hour(s), 1 minute(s), and 2 second(s) in 90062 seconds.
*/

/*
Output3:
How many seconds are you checking?
0
Invalid entry. Try again.
*/

/*
Output4:
How many seconds are you checking?
60
There is 1 minute in 60 seconds.
*/
