/*
Dyllan Castia
3/11/26
This program:
1. Introduces the player to the game.
2. Generates a random number and stores it for later use.
3. Prompts user for entry.
4. Validates the entry using valide() function (also checks if the user enters a choice equal
to the computer choice, if so a new choice is generated and the user is prompted for a new entry.)
5. The result function checks the computer choice and the player choice and displays
the appropriate message.
6. Asks the user if they want to play again 
(validates answer and prompts user again if invalid) 
if the answer is "y" play again if "n" program ends.
*/

#include <iostream>
#include <cstdlib> //exit(); rand() and srand(x) <-- define seed for rand
//For exit() --> EXIT_SUCCESS -->  EXIT_FAILURE
#include <ctime> //time (for now used for random seed)
#include <string>
using namespace std;

//define min and max values for random number 1-3
const int MIN = 1;
const int MAX = 3;

//function prototypes
int computerChoice();
void resultFunc(int, int);
void validate(int &, int &);

int main() {
    //define seed for true randomness
    unsigned seed = time(0);
    srand(seed);

    int playerChoice;
    string again = "y"; //For play again? "y" or "n"

    while (again == "y") {

        //generate random number & store it for later
        int puterChoice = computerChoice();
        //Initial message and prompt for input
        cout << "Let's play Rock, Paper, Scissors!\nEnter \"1\" for Rock. ";
        cout << "Enter \"2\" for Paper. Enter \"3\" for Scissors.\nWhat is your choice: ";
        cin >> playerChoice;

        //is player choice valid and not equal to the computer choice?
        validate(playerChoice, puterChoice);

        //calculate and displays the results
        resultFunc(puterChoice, playerChoice);

        cout << "Play again? Enter \"y\" for yes, or \"n\" for no: ";
        cin >> again;

        while (again != "y" && again != "n") {
            cout << "Enter \"y\" for yes, or \"n\" for no: ";
            cin >> again;
        }
    }
    return 0; //function end if again == "n"
}

int computerChoice() {
    int choice = (rand() % (MAX - MIN + 1)) + MIN; //min and max 1-3

    return choice;
}

void resultFunc(int comp, int player) {

    //decision tree
    if ((comp == 1) && (player == 2)) {
        cout << "Paper covers Rock!\nYou Win!\n";
    }
    else if((comp == 2) && (player == 3)) {
        cout << "Scissors cuts Paper!\nYou Win!\n";
    }
    else if((comp == 3) && (player == 1)) {
        cout << "Rock smashes Scissors!\nYou Win!\n";
    }
    else if ((comp == 1) && (player == 3)) {
        cout << "Rock smashes Scissors!\nComputer Wins.\n";
    }
    else if ((comp == 2) && (player == 1)) {
        cout << "Paper covers Rock!\nComputer Wins.\n";
    }
    else if ((comp == 3) && (player == 2)){
        cout << "Scissors cuts Paper!\nComputer Wins.\n";
    }
    else {
        cout << "Error";
    }

}

void validate(int &playerChoice, int &puterChoice) {
    //validate initial input
    while ((playerChoice < 1) || (playerChoice > 3)) {
        cout << "Invalid entry!\nEnter \"1\" \"2\" or \"3\": ";
        cin >> playerChoice;
    }

    //Handles player choice if equal to computer choice
    while (playerChoice == puterChoice) {
        cout << "It's a tie!\nTry again\nEnter \"1\" \"2\" or \"3\": ";
        puterChoice = computerChoice();
        cin >> playerChoice;
    
        //player choice in range 1-3 inclusive
        while ((playerChoice < 1) || (playerChoice > 3)) {
            cout << "Invalid entry!\nEnter \"1\" \"2\" or \"3\": ";
            cin >> playerChoice;
        }
    }
}

/*
Ouput:
Let's play Rock, Paper, Scissors!
Enter "1" for Rock. Enter "2" for Paper. Enter "3" for Scissors.
What is your choice: 4
Invalid entry!
Enter "1" "2" or "3": 1
Rock smashes Scissors!
You Win!
Play again? Enter "y" for yes, or "n" for no: y
Let's play Rock, Paper, Scissors!
Enter "1" for Rock. Enter "2" for Paper. Enter "3" for Scissors.
What is your choice: 2
Paper covers Rock!
You Win!
Play again? Enter "y" for yes, or "n" for no: d
Enter "y" for yes, or "n" for no: y
Let's play Rock, Paper, Scissors!
Enter "1" for Rock. Enter "2" for Paper. Enter "3" for Scissors.
What is your choice: 2
It's a tie!
Try again
Enter "1" "2" or "3": 3
Scissors cuts Paper!
You Win!
Play again? Enter "y" for yes, or "n" for no: y
Let's play Rock, Paper, Scissors!
Enter "1" for Rock. Enter "2" for Paper. Enter "3" for Scissors.
What is your choice: 1
It's a tie!
Try again
Enter "1" "2" or "3": 1
Paper covers Rock!
Computer Wins.
Play again? Enter "y" for yes, or "n" for no: n
*/
