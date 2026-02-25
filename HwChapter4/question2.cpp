/*
Dyllan Castia
2/23/26
This program:
1. Takes a number as an argument for switch
2. Converts that number into a roman numeral
3. Outputs an error message if number < 1 or number > 10
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //define variables
    int number;

    cout << "Roman Numeral Converter:" << endl;
    cout << "Enter a number from 1 to 10" << endl;
    cin >> number;

    switch (number) {
        case 1: cout << "Roman Numeral 1 is: I\n";
            break;
        case 2: cout << "Roman Numeral 2 is: II\n";
            break;
        case 3: cout << "Roman Numeral 3 is: III\n";
            break;
        case 4: cout << "Roman Numeral 4 is: IV\n";
            break;
        case 5: cout << "Roman Numeral 5 is: V\n";
            break;
        case 6: cout << "Roman Numeral 6 is: VI\n";
            break;
        case 7: cout << "Roman Numeral 7 is: VII\n";
            break;
        case 8: cout << "Roman Numeral 8 is: VIII\n";
            break;
        case 9: cout  << "Roman Numeral 9 is: IX\n";
            break;
        case 10: cout << "Roman Numeral 10 is: X\n";
            break;
        default: cout << "Please enter a number that is greater than 0 and less than 11\n";
    }
    return 0;
}

/*
Output 1:
Roman Numeral Converter:
Enter a number from 1 to 10
4
Roman Numeral 4 is: IV
*/

/*
Output 2:
Roman Numeral Converter:
Enter a number from 1 to 10
8
Roman Numeral 8 is: VIII
*/

/*
Output 3:
Roman Numeral Converter:
Enter a number from 1 to 10
11
Please enter a number that is greater than 0 and less than 11
*/
