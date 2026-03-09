/*
Dyllan Castia
3/2/26
This program:
1. Generates a random number
2. asks the user to quess what it is
3. tells the user if nummber entered is too low or too high
then prompts the user for new guesses until correct answer or 
answer is 0;
4. outputs either "Okay, maybe next time." (if user enters 0)
or 
"Great job, you guessed it!
The number was indeed 7"
(if guess is correct)
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <cmath> //abs, cos, exp, fmod, log, log10, sin, sqrt, tan
#include <cstdlib> //rand() and srand(x) <-- define seed for rand
#include <ctime>
using namespace std;

int main() {
    int seed = time(0), num, guess;
    srand(seed);
    const int MIN = 1;
    const int MAX = 10;

    num = (rand() % (MAX - MIN + 1)) + MIN;

    cout << "I am thinking of a number between 1 and 10. Guess what it is.\n";
    cout << "If you want to quit enter \"0\"\nGuess: ";
    cin >> guess;

    while (guess != num) {
        if ((guess < num) && (guess != 0)) {
            cout << "Too low, try again.\nGuess: ";
            cin >> guess;
        }
        else if(guess > num) {
            cout << "Too high, try again.\nGuess: ";
            cin >> guess;
        }
        else if (guess == 0) {
            cout << "Okay, maybe next time.";
            return 0;
        }
    }
    cout << "Great job, you guessed it!";
    cout << "\nThe number was indeed " << num << endl;
    return 0;
}

/*
Output 1:
If you want to quit enter "0"
Guess: 0
Okay, maybe next time.
*/

/*
Output 2:
I am thinking of a number between 1 and 10. Guess what it is.
If you want to quit enter "0"
Guess: 1
Too low, try again.
Guess: 10
Too high, try again.
Guess: 5
Too low, try again.
Guess: 6
Too low, try again.
Guess: 7
Great job, you guessed it!
The number was indeed 7
*/
