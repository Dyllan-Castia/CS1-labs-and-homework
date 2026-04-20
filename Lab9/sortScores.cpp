/*
Dyllan Castia
4/15/26
This program:
1. Initializes a pointer variable to nullptr.
2. Asks the user how many scores they will enter.
3. Sets the SIZE constant equal to the number entered by the user.
4. Dynamically allocates memory for a double array with the entered SIZE.
5. Fills the new array with the test scores entered by the user.
6. Calls a function to sort the array in ascending order.
7. Displays the oredered test scores.
8. Displays the average of all the test scores by calling the calcAverage function.
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

double *sortScores(double *, int);
double calcAverage(double *, int);

int main() {
    double *testScores = nullptr; //init double pointer
    int numScores;

    cout << "How many test scores will you enter: ";
    cin >> numScores;

    while (numScores < 0) { //input validation
        cout << "Please enter a non-negative number: ";
        cin >> numScores;
    }

    const int SIZE = numScores; //init SIZE constant to user entered number.
    testScores = new double[SIZE]; //Dynamically allocate memory for the array.

    if (testScores == nullptr) { //Check if there is enough memory to allocate in heap
        cout << "Not enough memory!";
        return 0;
    }

    for (int count = 0; count < SIZE; count++) { //init array elements with user inputs
        double score = 0.0;
        cout << "Enter score " << count + 1 << ": ";
        cin >> score;
        testScores[count] = score;
    }

    testScores = sortScores(testScores, SIZE); //sort array elements in ascending order

    cout << fixed << setprecision(1);

    for (int i = 0; i < SIZE; i++) { //Dispay sorted scores
        cout  << "Test score " << i + 1 << ": " << testScores[i] << " \n";
    }

    //vv Display average vv
    cout << "The average of all test scores is: " << calcAverage(testScores, SIZE) << endl;

    delete[] testScores;

    return 0;
}

double *sortScores(double *scores, int size) {
    sort(scores, scores + size); 
    //^^ Sort array passed as argument using built in function from <algorithm>
    //Did not want to use a nested loop for this :P
    
    return scores;
}

double calcAverage(double *scores, int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum / static_cast<double>(size); //prevent int division error
}

/*
Output:
How many test scores will you enter: 5
Enter score 1: 95.5
Enter score 2: 88.5
Enter score 3: 75.5
Enter score 4: 78.0
Enter score 5: 68.0
Test score 1: 68.0 
Test score 2: 75.5 
Test score 3: 78.0 
Test score 4: 88.5 
Test score 5: 95.5 
The average of all test scores is: 81.1
*/
