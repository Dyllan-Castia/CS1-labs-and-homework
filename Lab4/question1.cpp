/*
Dyllan Castia
2/18/26
This program takes company name, hours, and rate as input, checks for overtime hours, calculates overtimepay if there
is overtime, else regular pay if there is not overtime, then:
displays a random number for a document number, followed by a company name and calculated gross pay.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    unsigned seed = time(0); //set seed to current time.
    srand(seed); //set random's seed to variable: seed as defined above.

    double hours, rate, pay, overTimeHrs; //define double precision variables without initializing.
    string companyName; //define company name string without initializing.

    cout << "Enter your company name: " << endl; //input message.
    getline(cin, companyName); //input including all words and spaces on one line.

    cout << "Enter the hours worked: " << endl; //input message.
    cin >> hours; //hours worked assigned to hours.

    cout << "Enter the pay rate per hour: " << endl; //input message.
    cin >> rate; //rate of pay assigned to rate.

    if (hours > 40) {
        overTimeHrs = hours - 40;
        pay = (hours * rate) + (overTimeHrs * (1.5 * rate));    
    }
    else {
        pay = hours * rate;
    }
 
    cout << setw(9) << "Company name: " << companyName << endl; //set print field width 2 9 spaces. Output message.
    cout << setprecision(2) << fixed; //set floating point trailing digits to 2
    cout << setw(9) << "Hours worked: " << hours << endl; //output message
    cout << setw(9) << "Pay rate: " << rate << endl; //output message
    cout << endl; //skip a line in output.
    cout << setw(9) << "Your document number is: " << rand() << endl; //document number randomly generated.
    cout << setw(9) << "Your " + companyName + " gross pay is: " << pay << " dollars\n"; //output message
    return 0;
}
/*
Output:
Enter your company name: 
Rosetta Roasting
Enter the hours worked: 
50
Enter the pay rate per hour: 
20
Company name: Rosetta Roasting
Hours worked: 50.00
Pay rate: 20.00

Your document number is: 9572
Your Rosetta Roasting gross pay is: 1300.00 dollars
*/

/*
Output2:
Enter your company name: 
Ridgeline
Enter the hours worked: 
40
Enter the pay rate per hour: 
80
Company name: Ridgeline
Hours worked: 40.00
Pay rate: 80.00

Your document number is: 7593
Your Ridgeline gross pay is: 3200.00 dollars
*/
