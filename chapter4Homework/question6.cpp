/*
Dyllan Castia
2/23/26
This program:
1. Asks the user what they are messuring.
2. Asks for the mass of the object.
3. Calculates the weight of the object in Newtons.
4. Decides weather the object is too light or too heavy for the experiment.
5. Displays a message with the result.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double mass;
    double weight = 0;
    string object;
    
    //Prompt user for object (just for fun).
    cout << "What are you measuring today?\n";
    getline(cin, object);
    //Prompt user for the mass of said object.
    cout << "Interesting! Okay, what is the mass of the " << object << " in kilograms?" << endl;
    cin >> mass;

    //Check for valid input
    if (mass <= 0) {
        cout << "Invalid entry. Try again.";
        return 0;
    }
    
    //Calculate weight in Newtons
    weight = mass * 9.8;

    cout << fixed << setprecision(2);
    cout << "The " << object << " weighs " << weight << " Newtons" << endl;

    if (weight > 1000) {
        cout << "The " << object << " is too heavy for this experiment.";
    }
    else if (weight < 10) {
        cout << "The " << object << " is too light for this experiment.";
    }
    else {
        cout << "Let's start the experiment involving the " << object << ".";
    }
    return 0;
}

/*
Output 1:
What are you measuring today?
yo-yo
Interesting! Okay, what is the mass of the yo-yo in kilograms?
4
The yo-yo weighs 39.20 Newtons
Let's start the experiment involving the yo-yo.
*/

/*
Output2: 
What are you measuring today?
barrel
Interesting! Okay, what is the mass of the barrel in kilograms?
1000
The barrel weighs 9800.00 Newtons
The barrel is too heavy for this experiment.
*/

/*
Output 3:
What are you measuring today?
leaf
Interesting! Okay, what is the mass of the leaf in kilograms?
1
The leaf weighs 9.80 Newtons
The leaf is too light for this experiment.
*/
