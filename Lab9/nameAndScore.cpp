/*
Dyllan Castia
4/15/26
This program:
1. Initializes a pointer variable to nullptr.
2. Asks the user how many scores they will enter.
3. Sets the SIZE constant equal to the number entered by the user.
4. Dynamically allocates memory for a structured data array with the entered SIZE.
5. Fills the new struct array with the name and test scores entered by the user.
6. Calls a function to sort the struct array in ascending order.
7. Displays the oredered names and test scores.
8. Displays the average of all the test scores by calling the calcAverage function.
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

struct StudentScores {
    string name;
    double score;
};

void sortScores(StudentScores*, int);
double calcAverage(StudentScores*, int);

int main() {
    StudentScores* testScores = nullptr; // init test scores to nullptr
    int numScores;

    cout << "How many test scores will you enter: ";
    cin >> numScores;

    while (numScores < 0) {
        cout << "Please enter a non-negative number: ";
        cin >> numScores;
    }

    const int SIZE = numScores;
    testScores = new StudentScores[SIZE]; //Dynamically allocate memory for array of struct data

    for (int count = 0; count < SIZE; count++) {
        cout << "Enter student " << count + 1 << " name: ";
        cin >> testScores[count].name; //initialize names
    }

    for (int count = 0; count < SIZE; count++) {
        cout << "Enter score " << count + 1 << ": ";
        cin >> testScores[count].score; //initialize scores
    }

    sortScores(testScores, SIZE); //sort the struct data in ascending order

    cout << fixed << setprecision(1);

    for (int i = 0; i < SIZE; i++) { //display names and scores together
        cout << testScores[i].name << " scored: " << testScores[i].score << "\n";
    }

    cout << "The average of all test scores is: "
         << calcAverage(testScores, SIZE) << endl; //calc average of all scores

    delete[] testScores; //prevent memory leaks
    return 0;
}

void sortScores(StudentScores* scores, int size) {
    sort(scores, scores + size, [](StudentScores a, StudentScores b) {
        return a.score < b.score; //sort array of struct data in ascending order using sort function
    });
}

double calcAverage(StudentScores* scores, int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += scores[i].score;
    }

    return sum / static_cast<double>(size);
}

/*
Output:
How many test scores will you enter: 5
Enter student 1 name: Timmy
Enter student 2 name: Jimmy
Enter student 3 name: Jonny 
Enter student 4 name: Ronnie
Enter student 5 name: Fred
Enter score 1: 75.5
Enter score 2: 88.5
Enter score 3: 44.5
Enter score 4: 95.0
Enter score 5: 99.0
Jonny scored: 44.5
Timmy scored: 75.5
Jimmy scored: 88.5
Ronnie scored: 95.0
Fred scored: 99.0
The average of all test scores is: 80.5
*/
