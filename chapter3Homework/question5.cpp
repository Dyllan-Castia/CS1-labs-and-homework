/*
Dyllan Castia
2/11/26
This program asks the user: 
1. How many males are in the class
2. How many females are in the class
Then: 
1. Displays total students in the class
2. Displays the percentage of males and percentage of females
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double males, females, totalStudents; //define variables
    double percentMales, percentFemales; //define variables

    //vvv prompt for input vvv
    cout << "How many males are in the class?" << endl;
    cin >> males;
    cout << "How many females are in the class?" << endl;
    cin >> females;

    //vvv calculate total students, percentage males, and percentage females. vvv
    totalStudents = males + females;
    percentMales = (males / totalStudents) * 100;
    percentFemales = (females / totalStudents) * 100;

    //vvv Display messages. vvv
    cout << "There are " << totalStudents << " students in the class." << endl;
    cout << percentMales << "% of them are males and " << percentFemales << "% of them are female.";
    return 0;
}
/*
Output:
How many males are in the class?
12
How many females are in the class?
8
There are 20 students in the class.
60% of them are males and 40% of them are female.
*/
