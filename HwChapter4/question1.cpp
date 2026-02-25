/*
Dyllan Castia
2/18/26
This program:
1. Asks the user for 2 numbers
2. Decides which number is smaller or if they are equal
3. Displays the result.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1, num2;
   
   cout << "Enter 2 whole numbers seperated by 1 space:" << endl;
   cin >> num1 >> num2;

   if (num1 < num2) {
    cout << num1 << " is smaller than " << num2 << endl;
   }
   else if (num2 < num1) {
    cout << num2 << " is smaller than " << num1 << endl;
   }
   else {
    cout << num1 << " is equal to " << num2 << endl;
   }

   return 0;
}
/*
output1:
Enter 2 whole numbers seperated by 1 space:
2 4
2 is smaller than 4

Output2:
Enter 2 whole numbers seperated by 1 space:
4 2
2 is smaller than 4

Output3:
Enter 2 whole numbers seperated by 1 space:
4 4
4 is equal to 4
*/
