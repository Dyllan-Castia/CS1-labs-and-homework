/*
Dyllan Castia
3/9/26
This program:
1. Asks the user how many accidents were reported in each region.
2. Validates the answer agains negative inputs.
3. Calculates which answer holds the lowest value.
4. Displays a message with the name of the region with the least accidents
and displays the number of accidents that region reported.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <string>
using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);
bool isValid(int);

int main() {
   int north, south, east, west, central;

   //vv Prompts user for (argument's) number of accidents reported. vv
   north = getNumAccidents("North");
   south = getNumAccidents("South");
   east = getNumAccidents("East");
   west = getNumAccidents("West");
   central = getNumAccidents("Central");

   //vv Calculates the region with lowest accidents.
   findLowest(north, south, east, west, central); //Displays:
   //Name of region with lowest accidents and the number of accidents.
}

//vv input validation function vv
bool isValid(int value) {
    if (value >= 0) {
        return true;
    }
    else {
        return false;
    }
}

//vv function prompting user for values vv
int getNumAccidents(string region) {
    int accidents;

    cout << "How many accidents were reported in the " << region << " region";
    cout << " last year: ";
    cin >> accidents;

    while (!(isValid(accidents))) {
        cout << "Answer cannot be negative\nHow many accidents were reported ";
        cout << "in the " << region << " region last year: ";
        cin >> accidents;
    }

    return accidents;
}

//vv Calculate and display function vv
void findLowest(int n, int s, int e, int w, int c) {
    int result = n;
    string lowest = "North";

    if (result > s) {
        result = s;
        lowest = "South";
    }

    if (result > e) {
        result = e;
        lowest = "East";
    }

    if (result > w) {
        result = w;
        lowest = "West";
    }

    if (result > c) {
        result = c;
        lowest = "Central";
    }

    cout << "The " << lowest << " region had the fewest accidents: " << result << " accident(s)";
}

/*
Output: 
How many accidents were reported in the North region last year: -1
Answer cannot be negative
How many accidents were reported in the North region last year: 0
How many accidents were reported in the South region last year: 1
How many accidents were reported in the East region last year: 3
How many accidents were reported in the West region last year: 4
How many accidents were reported in the Central region last year: 2
The North region had the fewest accidents: 0 accident(s)
*/
