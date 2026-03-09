/*
Dyllan Castia
3/2/26
This program:
1. Reads a file (checks if file is read correctly and throws error if not)
2. Tracks the amont of numbers read from the file.
3. Increments the sum by each number read
4. calculates the average of all the numbers
5. Displays number of numbers, sum of all numbers, and the average of all numbers;
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <fstream>
using namespace std;

int main() {
    ifstream infile("Random.txt");
    
    if(!infile) {
        cout << "Error: File not read. Check working directory.\n";
        return 1;
    }

    int nums = 0, sum = 0, count = 0;
    double average;

    while (infile >> nums) {
        sum += nums;
        count ++;
    }
    average = sum / static_cast<double>(count);

    cout << "The number of numbers in the file is: " << count << endl;
    cout << "The sum of all the numbers is: " << sum << endl;
    cout << "The average of all the numbers is: " << average << endl;
    return 0;
}

/*
Ouput:
The number of numbers in the file is: 200
The sum of all the numbers is: 105527
The average of all the numbers is: 527.635
*/
