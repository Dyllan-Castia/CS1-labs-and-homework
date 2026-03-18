/*
Dyllan Castia
3/11/26
This program:
1. Asks the user for 5 test scores.
2. Uses getScore(reference) to store the results in 5 seperate variables;
3. Calls the calcAverage() function to calculate the average of the four highest scores,
display a message with the average, and the lowest score that was dropped from the calculation.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <string>
using namespace std;

//vv function prototypes vv
void getScore(double &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);

int main() {
    //initiaize score for reference and define storage variables.
   double score = -1, s1, s2, s3, s4, s5;

   //vv Store the scores in variables vv
   getScore(score);
   s1 = score;
   getScore(score);
   s2 = score;
   getScore(score);
   s3 = score;
   getScore(score);
   s4 = score;
   getScore(score);
   s5 = score;

   calcAverage(s1, s2, s3, s4, s5); //calculate and display message

   return 0;
}

void getScore(double &score) { //define score parameter as reference to be updated

    cout << "What is the test score: ";
    cin >> score; //stores value in score (to be stored in new variable outside this function)

    while ((score < 0) || (score > 100)) { //input validation
        cout << "Invalid entry!\nScore must be between 0 and 100.\nWhat is the test score: ";
        cin >> score;
    }
}

void calcAverage(double s1, double s2, double s3, double s4, double s5) {
    double average, lowest;

    lowest = findLowest(s1, s2, s3, s4, s5); //store result of function call in lowest
    average = (s1 + s2 + s3 + s4 + s5 - lowest) / 4; //calculate average without lowest

    cout << fixed << setprecision(1);
    cout << "The average of the four highest scores is " << average << endl;
    cout << "The lowest score was " << lowest << " and was dropped from the average.\n";
}

double findLowest(double s1, double s2, double s3, double s4, double s5) {
    double lowest = s1;

    //vv logic for finding the lowest test score
    if (lowest > s2) {
        lowest = s2;
    }

    if (lowest > s3) {
        lowest = s3;
    }

    if (lowest > s4) {
        lowest = s4;
    }

    if (lowest > s5) {
        lowest = s5;
    }
    
    return lowest; //lowest test score
}

/*
Output 1:
What is the test score: 50
What is the test score: 75.5
What is the test score: 80
What is the test score: 85.5
What is the test score: 90
The average of the four highest scores is 82.8
The lowest score was 50.0 and was dropped from the average.

Output 2:
What is the test score: -2
Invalid entry!
Score must be between 0 and 100.
What is the test score: 0
What is the test score: 35
What is the test score: 75
What is the test score: 90
What is the test score: 85
The average of the four highest scores is 71.2
The lowest score was 0.0 and was dropped from the average.
*/
