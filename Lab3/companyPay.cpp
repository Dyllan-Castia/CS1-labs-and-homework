/*
Dyllan Castia
2/9/26
This program takes company name, hours, and rate as input, calculates pay, then
displays a random number for a document number, followed by a company name and calculated gross pay.

Note: I am aware that explaining every line in code including self explanatory lines is considered messy
and degrades the readability of a program, however I will do it for the sake of this course work unless
instructed not to do so.
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
    double hours, rate, pay; //define double precision variables without initializing.
    string companyName; //define company name string without initializing.

    cout << "Enter your company name: " << endl; //input message.
    getline(cin, companyName); //input including all words and spaces on one line.
    cout << "Enter the hours worked: " << endl; //input message.
    cin >> hours; //hours worked assigned to hours.
    cout << "Enter the pay rate per hour: " << endl; //input message.
    cin >> rate; //rate of pay assigned to rate.
    pay = rate * hours; //gross pay calculation assigned to pay.
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
Enter your company name: 
OpenAI
Enter the hours worked: 
40
Enter the pay rate per hour: 
95.5
Company name: OpenAI
Hours worked: 40.00
Pay rate: 95.50

Your document number is: 31998
Your OpenAI gross pay is: 3820.00 dollars
*/

/*
Enter your company name: 
Tesla
Enter the hours worked: 
70
Enter the pay rate per hour: 
105.32
Company name: Tesla
Hours worked: 70.00
Pay rate: 105.32

Your document number is: 32393
Your Tesla gross pay is: 7372.40 dollars
*/
