/*
Dyllan Castia
4/8/26
This program:
1. Uses a loop to ask for an integer 5 times and store that input in an array
2. Calls the calcAverage() function with the array as an argument.
3. Displays the average of the input values.
*/

#include <iostream>
#include <iomanip>

using namespace std;

double calcAverageByVal(int [], int);
void calcAverageByRef(int [], int, double &);
void calcAverageByPtr(int [], int, double);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    double average = 0.0;
    double *aveptr = &average;

    //Part 1
    for (int count = 0; count < SIZE; count++) {
        cout << "Enter an integer: ";
        cin >> numbers[count];
    }

    cout << "Ouput 1:\n";
    cout << "The average is: " << calcAverageByVal(numbers, SIZE) << endl;
    //End Part 1

    //Part 2
    calcAverageByRef(numbers, SIZE, average);

    cout << "Ouput 2:\n";
    cout << "Input: ";
    for (int index = 0; index < SIZE; index++) {
        cout << numbers[index] << " ";
    }
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Average is: " << average << endl;

    cout << "Function type: pass-by-reference" << endl;
    //End Part 2

    //Part 3
    calcAverageByPtr(numbers, SIZE, *aveptr);

     cout << "Ouput 3:\n";
    cout << "Input: ";
    for (int index = 0; index < SIZE; index++) {
        cout << numbers[index] << " ";
    }
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Average is: " << *aveptr << endl;

    cout << "Function type: pass-by-reference" << endl;

    return 0;
}

double calcAverageByVal(int nums[], int size) {
    double average = 0.0;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    average = static_cast<double>(sum) / size;

    return average;
}

void calcAverageByRef(int nums[], int size, double &average) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    average = static_cast<double>(sum) / size;
}

void calcAverageByPtr(int nums[], int size, double aveptr) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    aveptr = static_cast<double>(sum) / size;
}

/*
Output 1:
Enter an integer: 2
Enter an integer: 4
Enter an integer: 7
Enter an integer: 8
Enter an integer: 4
Ouput 1:
The average is: 5
Ouput 2:
Input: 2 4 7 8 4 
Average is: 5.00
Function type: pass-by-reference
Ouput 3:
Input: 2 4 7 8 4 
Average is: 5.00
Function type: pass-by-reference
*/
