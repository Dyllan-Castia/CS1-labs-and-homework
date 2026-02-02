/*
Dyllan Castia
01/29/26
Cyborg Data Type Sizes
This program displays the sizes of various 
data types in bytes.
*/
#include <iostream>
using namespace std;

int main() {
    //initialize variables to hold sizes of data types.
    const double xChar = sizeof(char);
    const double xInt = sizeof(int);
    const double xFloat = sizeof(float);
    const double xDouble = sizeof(double);
    //display sizes of data types.
    cout << "Char size: " << xChar << " byte(s)" << endl;
    cout << "Int size: " << xInt << " byte(s)" << endl;
    cout << "Float Size: " << xFloat << " byte(s)" << endl;
    cout << "Double Size: " << xDouble << " byte(s)" << endl;
    return 0;
}
/*
Output:
Char size: 1 byte(s)
Int size: 4 byte(s)
Float Size: 4 byte(s)
Double Size: 8 byte(s)
*/
