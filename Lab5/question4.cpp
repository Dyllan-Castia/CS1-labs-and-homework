/*
Dyllan Castia
2/25/26
This program:
1. Tells the user what it will do.
2. Asks the user what operation they would like to practice. (checks for valid entry)
3. Creates 2 random numbers to be operated on.
4. Displays a message telling the user what to do with the numbers.
5. waits for user to press enter.
6. Displays the result of the operation on the 2 numbers.
7. Asks the user for another operation or if they want to quit. (checks for valid entry)
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <cstdlib> // rand() and srand(x) <-- define seed for rand
#include <ctime>
#include <string>

using namespace std;

int main() {
    unsigned seed = time(0);
    srand(seed);

    int num1, num2;
    double result;
    string selection;

    //Define min and max for random numbers
    const int MIN = 10;
    const int MAX = 999;

    //Message and menu
    cout << "I will give you 2 numbers to work on and then when you are done I will tell you the correct answer.\n";
    cout << "Which operation would you like to practice?\nType out your selection or type \"quit\" to exit.\n";
    cout << endl;
    cout << "addition\nsubtraction\nmultiplication\ndivision\nquit\n";

    cin >> selection;
    cin.ignore(); //ignore blank key stored in keyboard buffer from pressing enter. (for pauses)

    while (selection != "quit") {
        if (selection == "addition" ||
            selection == "subtraction" ||
            selection == "multiplication" ||
            selection == "division") {
                num1 = (rand() % (MAX - MIN + 1)) + MIN; //Formula for defining random number range
                num2 = (rand() % (MAX - MIN + 1)) + MIN; 
                if (selection == "addition") {
                    cout << "Add " << num1 << " and " << num2 << "." << endl;
                    cout << "Press enter when you think you have the answer.";
                    cin.get();
                    result = num1 + num2;
                    cout << "Correct answer: " << num1 << " + " << num2 << " = " << result << endl; 
                    cout << "Choose an operation again (or type \"quit\"): ";
                    cin >> selection;
                    cin.ignore();  
                }
                else if (selection == "subtraction") {
                    cout << "Subtract " << num1 << " from " << num2 << "." << endl;
                    cout << "Press enter when you think you have the answer.";
                    cin.get();
                    result = num1 - num2;
                    cout << "Correct answer: " << num1 << " - " << num2 << " = " << result << endl;
                    cout << "Choose an operation again (or type \"quit\"): ";
                    cin >> selection;
                    cin.ignore();
                }
                else if (selection == "multiplication") {
                    cout << "Multiply " << num1 << " by " << num2 << "." << endl;
                    cout << "Press enter when you think you have the answer.";
                    cin.get();
                    result = num1 * num2;
                    cout << "Correct answer: " << num1 << " * " << num2 << " = " << result << endl;
                    cout << "Choose an operation again (or type \"quit\"): ";
                    cin >> selection;
                    cin.ignore();
                }
                else if (selection == "division") {
                    cout << "Divide " << num1 << " by " << num2 << "." << endl;
                    cout << "Press enter when you think you have the answer.";
                    cin.get();
                    result = static_cast<double>(num1) / num2; //So that no truncation occurs
                    cout << "Correct answer: " << num1 << " / " << num2 << " = " << result << endl;
                    cout << "Choose an operation again (or type \"quit\"): ";
                    cin >> selection;
                    cin.ignore();
                }
            }
            else {
                cout << "Invalid entry!\nPlease make sure your selection is lowercase and spelled correctly.\n";
                cout << "Choose an operation or type \"quit\": ";
                cin >> selection;
                cin.ignore();
            }
    }
    return 0;
}

/*
output 1:
I will give you 2 numbers to work on and then when you are done I will tell you the correct answer.
Which operation would you like to practice?
Type out your selection or type "quit" to exit.

addition
subtraction
multiplication
division
quit
division
Divide 568 by 61.
Press enter when you think you have the answer.
Correct answer: 568 / 61 = 9.31148
Choose an operation again (or type "quit"): multiplication
Multiply 606 by 46.
Press enter when you think you have the answer.
Correct answer: 606 * 46 = 27876
Choose an operation again (or type "quit"): quit
*/

/*
Output 2:
I will give you 2 numbers to work on and then when you are done I will tell you the correct answer.
Which operation would you like to practice?
Type out your selection or type "quit" to exit.

addition
subtraction
multiplication
division
quit
addition
Add 943 and 709.
Press enter when you think you have the answer.
Correct answer: 943 + 709 = 1652
Choose an operation again (or type "quit"): subtraction
Subtract 686 from 716.
Press enter when you think you have the answer.
Correct answer: 686 - 716 = -30
Choose an operation again (or type "quit"): moogie
Invalid entry!
Please make sure your selection is lowercase and spelled correctly.
Choose an operation or type "quit": quit
*/
