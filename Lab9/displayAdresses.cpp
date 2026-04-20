/*
Dyllan Castia
4/15/26
This program:
1. Initializes an array of 10 numbers and a pointer to that array.
2. Displays a message telling the user the byte allocation for the array.
3. Loops through the array and displays a message for each element with
the content of each index as well as it's address.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 10;
    int nums[SIZE] = {1, 3, 5, 7, 9, 12, 15, 18, 21, 24};
    int *numsPtr = nums;

    cout << "The nums array takes up " << sizeof(nums) << " bytes of memory." << endl;

    for (int count = 0; count < SIZE; count++) {
        cout << nums[count] << " is in address: " << numsPtr + count << " \n";
    }

    return 0;
}

/*
Output:
The nums array takes up 40 bytes of memory.
1 is in address: 0x91431ff930 
3 is in address: 0x91431ff934 
5 is in address: 0x91431ff938 
7 is in address: 0x91431ff93c 
9 is in address: 0x91431ff940 
12 is in address: 0x91431ff944 
15 is in address: 0x91431ff948 
18 is in address: 0x91431ff94c 
21 is in address: 0x91431ff950 
24 is in address: 0x91431ff954 
*/
