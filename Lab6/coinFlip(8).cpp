/*
Dyllan Castia
3/9/26
This program:
Defines a function using rand() function with minimum 1 and maximum 2
1. Asks the user how many times they want to toss the coin.
2. Calls the coinToss() function how ever many times the user entered.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <cstdlib> //rand() and srand(x) <-- define seed for rand
#include <string>
using namespace std;

const int MIN = 1;
const int MAX = 2;

string coinToss();

int main() {
    //Now coinflip is truely random
    unsigned seed = time(0);
    srand(seed);

   int tosses, count;

   cout << "How many times should we flip the coin: ";
   cin >> tosses;

   while (tosses <= 0) {
    cout << "We should toss the coin at least once don't you think?\n";
    cout << "How many times should we flip the coin: ";
    cin >> tosses;
   }

   for (count = 1; count <= tosses; count++) {
    string message = "";
    message = coinToss();
    cout << "Toss " << count << " is " << message << endl; 
   }

   return 0;
}

string coinToss() {
    int result; 
    string face;
    
    result = (rand() % (MAX - MIN + 1)) + MIN; //Set up range 1-2

    if (result == 1) {
        face = "Heads";
    }
    else {
        face = "Tails";
    }
    return face;
}

/*
Output: 
How many times should we flip the coin: 0
We should toss the coin at least once don't you think?
How many times should we flip the coin: -1
We should toss the coin at least once don't you think?
How many times should we flip the coin: 5
Toss 1 is Tails
Toss 2 is Tails
Toss 3 is Heads
Toss 4 is Heads
Toss 5 is Tails
*/
