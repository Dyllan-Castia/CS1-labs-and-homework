/*
Dyllan Castia
3/2/26
This program:
1.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <fstream>
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

    ofstream outFile("savings.txt"); //create savings.txt

    if (!outFile) {
        cout << "Error: Out file not created.";
        return 1;
    }

    //vv Output file content after loop exit vv
    outFile << fixed << setprecision(2); //format 2 decimal points
    outFile << "The balance is now: $" << balance << endl;
    outFile << "There was " << deposits << " deposits and " << withdrawals << " withdrawals.\n";
    outFile << "The total interest earned is $" << totalinterestEarned << endl;

    outFile.close();

    return 0;
}

/*
Output: 
What is the annual interest rate for the account?
Interest rate: 1
Savings rate converted to decimal: 0.01
Savings rate: 1%
What was the starting balance at the time of account establishment?
Balance: 300
How many months has it been since you established the account?
Months passed: 3
How much was deposited in month 1?
Amount: 200
How much was withdrawn from the account?
Withdrawn: 30
How much was deposited in month 2?
Amount: 300
How much was withdrawn from the account?
Withdrawn: 140
How much was deposited in month 3?
Amount: 400
How much was withdrawn from the account?
Withdrawn: 200
*/

/*
File created: savings.txt
File content:
The balance is now: $831.61
There was 3 deposits and 3 withdrawals.
The total interest earned is $1.61
*/
