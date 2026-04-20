#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

double *sortScores(double *, int);
double calcAverage(double *, int, double);

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

    double smallest = 100.0;

    for (int i = 0; i < SIZE; i++) {

        if (testScores[i] < smallest) {
            smallest = testScores[i]; // find lowest score
        }
    }


    cout << fixed << setprecision(1);

    for (int i = 0; i < SIZE; i++) { //Dispay sorted scores
        cout  << "Test score " << i + 1 << ": " << testScores[i] << " \n";
    }

    cout << "Lowest test score: " << smallest << " was dropped." << endl;

    //vv Display average vv
    cout << "The average of all test scores is: " << calcAverage(testScores, SIZE, smallest) << endl;

    delete[] testScores;

    return 0;
}

double *sortScores(double *scores, int size) {
    sort(scores, scores + size); 
    //^^ Sort array passed as argument using built in function from <algorithm>
    //Did not want to use a nested loop for this :P
    
    return scores;
}

double calcAverage(double *scores, int size, double smallest) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    sum -= smallest; //drop lowest score
    return sum / static_cast<double>(size - 1); //prevent int division error
}

/*
Output:
How many test scores will you enter: 3
Enter score 1: 100.0
Enter score 2: 25.5
Enter score 3: 95.5
Test score 1: 25.5 
Test score 2: 95.5 
Test score 3: 100.0 
Lowest test score: 25.5 was dropped.
The average of all test scores is: 97.8
*/
