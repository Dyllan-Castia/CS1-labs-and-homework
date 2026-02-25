/*
Dyllan Castia
2/18/26
This program:
1. Displays a menu to the user.
2. Asks the user if they want items.
2(a). Asks the user how many items they want.
2(b). Checks for invalid entries.
Then:
1. Calculates the final price of the order
2. Displays the order.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //vvv Define Variables vvv
    int quantity1, quantity2, quantity3, quantity4, quantity5;
    string answer1, answer2, answer3, answer4, answer5;
    double price1, price2, price3, price4, price5, customerPrice;
    //vvv Assign prices to price variables vvv
    price1 = 10.00;
    price2 = 11.00;
    price3 = 13.00;
    price4 = 15.00;
    price5 = 12.00;

    //vvv Display Menu vvv
    cout << "Welcome to Burger Club.\n" << "Here is our menu." << endl;
    cout << endl;
    cout << left << setw(25) << "Plain Burger: ";
    cout << right << setw(8) << "$10.00" << endl;
    cout << left << setw(25) << "Cheeseburger: ";
    cout << right << setw(8) << "$11.00" << endl;
    cout << left << setw(25) << "Bacon Cheeseburger: ";
    cout << right << setw(8) << "$13.00" << endl;
    cout << left << setw(25) << "California Burger: ";
    cout << right << setw(8) << "$15.00" << endl;
    cout << left << setw(25) << "Turkey Burger: ";
    cout << right << setw(8) << "$12.00" << endl;
    cout << "All menu options come with fries and a drink." << endl;
    cout << endl;

    //vvv Prompt user for order and quantities vvv
    cout << "Would you like a Plain Burger? Type yes or no then press enter" << endl;
    cin >> answer1;

    //vvv If/else-if/else block to handle answers and errors vvv
    if (answer1 == "yes") {
        cout << "How many Plain Burgers?" << endl;
        cin >> quantity1;
        if (quantity1 < 0) {
            cout << "Please re-run the program and enter a positive number.";
            return 0;
        }
    }
    else if (answer1 == "no") {
        quantity1 = 0; 
        cout << "Okay." << endl;
    }
    else {
        cout << "Invalid entry. Please type yes or no all lowercase" << endl;
        cout << "please re-run the program";
        return 0;
    }

    cout << "Would you like a Cheeseburger? Type yes or no then press enter" << endl;
    cin >> answer2;

    //vvv If/else-if/else block to handle answers and errors vvv
    if (answer2 == "yes") {
        cout << "How many Cheeseburgers?" << endl;
        cin >> quantity2;
        if (quantity2 < 0) {
            cout << "Please re-run the program and enter a positive number.";
            return 0;
        }
    }
    else if (answer2 == "no") {
        quantity2 = 0;
        cout << "Okay." << endl;
    }
    else {
        cout << "Invalid entry. Please type yes or no all lowercase" << endl;
        cout << "please re-run the program";
        return 0;
    }

    cout << "Would you like a Bacon Cheeseburger? Type yes or no then press enter" << endl;
    cin >> answer3;

    //vvv If/else-if/else block to handle answers and errors vvv
    if (answer3 == "yes") {
        cout << "How many Bacon Cheeseburgers?" << endl;
        cin >> quantity3;
        if (quantity3 < 0) {
            cout << "Please re-run the program and enter a positive number.";
            return 0;
        }
    }
    else if (answer3 == "no") {
        quantity3 = 0;
        cout << "Okay." << endl;
    }
    else {
        cout << "Invalid entry. Please type yes or no all lowercase" << endl;
        cout << "please re-run the program";
        return 0;
    }

    cout << "Would you like a California Burger? Type yes or no then press enter" << endl;
    cin >> answer4;

    //vvv If/else-if/else block to handle answers and errors vvv
    if (answer4 == "yes") {
        cout << "How many California Burgers?" << endl;
        cin >> quantity4;
        if (quantity4 < 0) {
            cout << "Please re-run the program and enter a positive number.";
            return 0;
        }
    }
    else if (answer4 == "no") {
        quantity4 = 0;
        cout << "Okay." << endl;
    }
    else {
        cout << "Invalid entry. Please type yes or no all lowercase" << endl;
        cout << "please re-run the program";
        return 0;
    }

    cout << "Would you like a Turkey Burgers? Type yes or no then press enter" << endl;
    cin >> answer5;

    //vvv If/else-if/else block to handle answers and errors vvv
    if (answer5 == "yes") {
        cout << "How many Turkey Burgers?" << endl;
        cin >> quantity5;
        if (quantity5 < 0) {
            cout << "Please re-run the program and enter a positive number.";
            return 0;
        }
    }
    else if (answer5 == "no") {
        quantity5 = 0;
        cout << "Okay." << endl;
    }
    else {
        cout << "Invalid entry. Please type yes or no all lowercase" << endl;
        cout << "please re-run the program";
        return 0;
    }

    //vvv Calculations for prices forced to store doubles in quantity variables vvv
    price1 *= static_cast<double>(quantity1);
    price2 *= static_cast<double>(quantity2);
    price3 *= static_cast<double>(quantity3);
    price4 *= static_cast<double>(quantity4);
    price5 *= static_cast<double>(quantity5);
    //vvv Calculate customer price vvv
    customerPrice = static_cast<double>(price1 + price2 + price3 + price4 + price5);

    //vvv Set output format vvv
    cout << fixed << setprecision(2);
    //vvv Final Message vvv
    cout << "The total for your order is $" << customerPrice << endl;
    cout << "Thank you, have a fantastic day!" << endl;

    return 0;
}
/*
Output:
Welcome to Burger Club.
Here is our menu.

Plain Burger:              $10.00
Cheeseburger:              $11.00
Bacon Cheeseburger:        $13.00
California Burger:         $15.00
Turkey Burger:             $12.00
All menu options come with fries and a drink.

Would you like a Plain Burger? Type yes or no then press enter
yes
How many Plain Burgers?
1
Would you like a Cheeseburger? Type yes or no then press enter
yes
How many Cheeseburgers?
2
Would you like a Bacon Cheeseburger? Type yes or no then press enter
no
Okay.
Would you like a California Burger? Type yes or no then press enter
no
Okay.
Would you like a Turkey Burgers? Type yes or no then press enter
no
Okay.
The total for your order is $32.00
Thank you, have a fantastic day! 
*/

/*
Output2:
Welcome to Burger Club.
Here is our menu.

Plain Burger:              $10.00
Cheeseburger:              $11.00
Bacon Cheeseburger:        $13.00
California Burger:         $15.00
Turkey Burger:             $12.00
All menu options come with fries and a drink.

Would you like a Plain Burger? Type yes or no then press enter
yes
How many Plain Burgers?
5
Would you like a Cheeseburger? Type yes or no then press enter
yes
How many Cheeseburgers?
5
Would you like a Bacon Cheeseburger? Type yes or no then press enter
up yours
Invalid entry. Please type yes or no all lowercase
plese re-run the program 
*/

/*
Output3:
Welcome to Burger Club.
Here is our menu.

Plain Burger:              $10.00
Cheeseburger:              $11.00
Bacon Cheeseburger:        $13.00
California Burger:         $15.00
Turkey Burger:             $12.00
All menu options come with fries and a drink.

Would you like a Plain Burger? Type yes or no then press enter
yes
How many Plain Burgers?
-3
Please re-run the program and enter a positive number.
*/
