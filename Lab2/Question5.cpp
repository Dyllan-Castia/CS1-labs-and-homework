/*
Dyllan Castia
1/28/26
This program defines 5 numbers, calculates their sum and average,
then displays the results to the console.
*/
#include <iostream>
using namespace std;
int num1 = 28;
int num2 = 32;
int num3 = 37;
int num4 = 24;
int num5 = 33;
int sum = num1 + num2 + num3 + num4 + num5;
double average = sum / 5.0;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The sum of the 5 numbers is: " << sum << endl;
    cout << "The average of the 5 numbers is: " << average << endl;
    return 0;
}
/*
The sum of the 5 numbers is: 154
The average of the 5 numbers is: 30.80
*/
