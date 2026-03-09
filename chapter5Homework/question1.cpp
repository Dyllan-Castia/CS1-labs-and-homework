/*
Dyllan Castia
3/2/26
This program:
1. Asks the user what the annual savings rate is. 
(checks for negative numbers) 
(converts whole numbers to decimal)
(calculates and displays interest percentage)
2. Asks the user for a starting balance 
(checks for negative numbers)
3. Asks the user how many months it has been since account established. 
(checks for negative numbers)
4. Asks the user (for each month) how much was deposited and how much was withdrawn.
(checks for negative numbers)
(checks for negative balance and if negative: terminates program)
(increments deposits and withdraws by 1 if not 0)
5. calculates monthly interest, total interest earned, total balance (balance plus total interest).
6. Displays a message with ending balance, total interest earned, number of deposits
and number of withdraws.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    //vv Define variables vv
    double annualSavingsRate, startingBalance, totalinterestEarned, balance;
    totalinterestEarned = 0;
    startingBalance = 0;
    int monthsPassed;

    cout << "What is the annual interest rate for the account?\n" << "Interest rate: ";
    cin >> annualSavingsRate;

    //vv Negative numbers check vv
    while (annualSavingsRate < 0) {
        cout << "Interest cannot be negative. Try again.\nInterest rate: ";
        cin >> annualSavingsRate;
    }
    //vv Whole numbers conversion and interest percentage display vv
    if (annualSavingsRate >= 1) {
        annualSavingsRate /= 100;
        cout << "Savings rate converted to decimal: " << annualSavingsRate << endl;
        cout << "Savings rate: " << annualSavingsRate * 100 << "%\n";
    }
    else {
        cout << "Savings rate is: " << annualSavingsRate * 100 << "%\n";
    }

    cout << "What was the starting balance at the time of account establishment?\n" << "Balance: ";
    cin >> startingBalance;

    //vv Negative numbers check vv
    while (startingBalance < 0) {
        cout << "Starting balance cannot be negative. Try again.\nBalance: ";
        cin >> startingBalance;
    }

    balance = startingBalance; //initialize starting balance with input

    cout << "How many months has it been since you established the account?\n" << "Months passed: ";
    cin >> monthsPassed;

    //vv Negative numbers check vv
    while (monthsPassed < 0) {
        cout << "Months passed cannot be negative. Try again.\nMonths passed: ";
        cin >> monthsPassed;
    }

    //vv initialize deposit and withdraw count vv
    int count, deposits, withdrawals;
    deposits = 0;
    withdrawals = 0;

    for (count = 1; count <= monthsPassed; count++) {
        double amount, withdrawal; //local variables to be added to balance each loop iteration
        cout << "How much was deposited in month " << count << "?\n" << "Amount: ";
        cin >> amount;

        //vv Negative numbers check vv
        while (amount < 0) {
            cout << "Amount cannot be negative, try again.\n" << "Amount: ";
            cin >> amount;
        }
        if (amount > 0) {
            deposits += 1; //check for 0 if not 0 increment deposit
        }

        balance += amount; // update balance

        cout << "How much was withdrawn from the account?\n" << "Withdrawn: ";
        cin >> withdrawal;

        //vv Negative number check
        while (withdrawal < 0) {
            cout << "Withdrawn cannot be negative, try again.\n" << "Withdrawn: ";
            cin >> withdrawal;
        }
        if (withdrawal > 0) {
            withdrawals += 1; //check for 0 if not 0 increment witdraw
        }

        balance -= withdrawal; // update balance

        //vv Check for negative balance. If negative, terminate program vv
        if (balance < 0) {
            cout << "The Savings account has been closed due to negative balance. Goodbye.\n";
            return 0;
        }

        //vv Calculations vv
        double monthlyRate, monthInterestSaved;
        monthlyRate = annualSavingsRate / 12;
        monthInterestSaved = balance * monthlyRate;
        balance += monthInterestSaved;
        totalinterestEarned += monthInterestSaved;

    }

    //vv Output message after loop exit vv
    cout << fixed << setprecision(2); //format 2 decimal points
    cout << "The balance is now: $" << balance << endl;
    cout << "There was " << deposits << " deposits and " << withdrawals << " withdrawals.\n";
    cout << "The total interest earned is $" << totalinterestEarned << endl;

    return 0;
}

/*
Output 1:
What is the annual interest rate for the account?
Interest rate: 5
Savings rate converted to decimal: 0.05
Savings rate: 5%
What was the starting balance at the time of account establishment?
Balance: 200
How many months has it been since you established the account?
Months passed: 2
How much was deposited in month 1?
Amount: 500
How much was withdrawn from the account?
Withdrawn: 50
How much was deposited in month 2?
Amount: 500
How much was withdrawn from the account?
Withdrawn: 100
The balance is now: $1057.09
There was 2 deposits and 2 withdrawals.
The total interest earned is $7.09
*/

/*
Output 2:
What is the annual interest rate for the account?
Interest rate: -1
Interest cannot be negative. Try again.
Interest rate: 0
Savings rate is: 0%
What was the starting balance at the time of account establishment?
Balance: -1
Starting balance cannot be negative. Try again.
Balance: 0
How many months has it been since you established the account?
Months passed: -1
Months passed cannot be negative. Try again.
Months passed: 1
How much was deposited in month 1?
Amount: -1
Amount cannot be negative, try again.
Amount: 1
How much was withdrawn from the account?
Withdrawn: -1
Withdrawn cannot be negative, try again.
Withdrawn: 0
The balance is now: $1.00
There was 1 deposits and 0 withdrawals.
The total interest earned is $0.00
*/
