/*
Dyllan Castia
2/25/26
This program:
1. Asks the user for a positive number
2. Checks for valid entry.
3. Finds the sum of all numbers from 1 to input number
4. Displays the result
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    int num, nextNum, count, sum;
    nextNum = 1;
    count = 1;

    cout << "Enter a positive whole number greater than 0: ";
    cin >> num;

    while(num < 1) {
        cout << "Invalid entry!\n" << "Please enter a non-zero positive number: ";
        cin >> num; 
    }

    while (count <= num) {
        sum += nextNum;
        nextNum++;
        count++;
    }
    cout << "The sum of all numbers up to: " << num << " is " << sum << endl;

    return 0;
}

/*
Output 1:
Enter a positive whole number greater than 0: 10
The sum of all numbers up to: 10 is 55
*/

/*
Output 2:
Enter a positive whole number greater than 0: 0
Invalid entry!
Please enter a non-zero positive number: -1
Invalid entry!
Please enter a non-zero positive number: 1
The sum of all numbers up to: 1 is 1
*/
