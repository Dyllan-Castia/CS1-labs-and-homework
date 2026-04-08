/*
Dyllan Castia
4/8/26
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number; //define number variable
    int *ptr = nullptr; 
    ptr = &number;
    cout << number << endl;
    cout << ptr << endl;
    *ptr = 7;
    cout << *ptr << endl;
    return 0;
}
/*
Output:
0                                                                    
0x8949ffb14                                           
7  
*/
