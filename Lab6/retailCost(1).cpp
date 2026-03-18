/*
Dyllan Castia
3/9/26
This program:
1. Asks for item name, wholesale cost, and markup percentage.
2. Validates inputs using boolean function and a while loop
3. Converts any number greater than or equal to 1 to a decimal and
displays a message with the decimal as a percentage. 
(1 gets stored as .01 and gets displayed as 1%)
4. Uses a function to calculate retail cost
5. Displays the result message.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <string>
using namespace std;

bool isValidCost(double);
bool isValidMark(double);
double calculateRetail(double, double);

int main() {
   double cost, markup, retail;
   string item;

   cout << "What is the item called: ";
   getline(cin, item);

   cout << "What is the item's wholesale cost: ";
   cin >> cost;

   while (!(isValidCost(cost))) {
    cout << "Answer cannot be negative!\nWhat is the item's wholesale cost: ";
    cin >> cost;
   }

   cout << "What is the markup percentage: ";
   cin >> markup;

   while (!(isValidMark(markup))) {
    cout << "Answer cannot be negative!\nWhat is the item's markup percentage: ";
    cin >> markup;
   }

   if (markup >= 1) {
    markup /= 100;
    cout << "Markup percentage converted to proper percentage: " << markup * 100 << "%\n";
   }

   retail = calculateRetail(cost, markup);
   cout << fixed << setprecision(2);
   cout << "Product: " << item << " retails at $" << retail << endl;

   return 0;
}

bool isValidCost(double cost) {
    if (cost >= 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isValidMark(double markup) {
    if (markup >= 0) {
        return true;
    }
    else {
        return false;
    }
}

double calculateRetail(double cost, double markup) {
    return cost + (cost * markup);
}

/*
output 1:
What is the item called: Tape
What is the item's wholesale cost: 1
What is the markup percentage: 2
Markup percentage converted to proper percentage: 2%
Product: Tape retails at $1.02

Output 2:
What is the item called: Lightbulb
What is the item's wholesale cost: -1
Answer cannot be negative!
What is the item's wholesale cost: 3
What is the markup percentage: -1
Answer cannot be negative!
What is the item's markup percentage: .04
Product: Lightbulb retails at $3.12
*/
