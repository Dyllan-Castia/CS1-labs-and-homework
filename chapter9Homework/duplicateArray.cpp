/*
Dyllan Castia
4/8/26
This program:
1. Accept an array and its size as arguments.
2. Dynamically allocate a new array that is the same size as the argument array.
3. Copy the elements of the argument array to the new array.
4. Return a pointer to the new array.
5. Print both original and result arrays
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.

using namespace std;

int* duplicateArray(int [], int size); //function definition

int main() {
    const int SIZE = 10; //initialize size constant
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //initialize array contents

    //vv Call function and assign result pointer to newArray vv
    int* newArray = duplicateArray(array, SIZE);

    //vv Display results vv
    cout << "Original array: ";
    
    for (int index = 0; index < SIZE; index++) {
        cout << array[index] << " ";
    }

    cout << "\nNew Array: ";

    for (int index = 0; index < SIZE; index++) {
        cout << newArray[index] << " ";
    }
    
    delete[] newArray; //Prevent Memory leak by OS reclaim

   return 0;
}

int* duplicateArray(int arrayArg[], int size) {
    int* copyptr = new int[size];

    for (int i = 0; i < size; i++) {
        copyptr[i] = arrayArg[i];
    }
    return copyptr;
}

/*
Output:
Original array: 1 2 3 4 5 6 7 8 9 10 
New Array: 1 2 3 4 5 6 7 8 9 10 
*/
