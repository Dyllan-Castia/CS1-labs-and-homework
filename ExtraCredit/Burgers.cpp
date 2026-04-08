#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

bool validate(int);
double calcPriceBeforeTax(int, int, int, int, int);
double calcTax(double);

int main() {
    double priceBeforeTax, tax, total;
    int quantity1, quantity2, quantity3, quantity4, quantity5;
    char student = 'n';

    cout << "Welcome to Burger Club.\nHere is the menu:\n";
    cout << setw(16) << "De Anza Burger:" << setw(10) << "$5.25\n";
    cout << setw(16) << "Bacon Cheese:" << setw(10) << "$5.75\n";
    cout << setw(16) << "Mushroom Swiss:" << setw(10) << "$5.95\n";
    cout << setw(16) << "Western Burger:" << setw(10) << "$5.95\n";
    cout << setw(16) << "Don Cali Burger:" << setw(10) << "$5.95\n";

    cout << "How many De Anza Burger?\n";
    cin >> quantity1;

    while (!(validate(quantity1))) {
        cout << "Invalid input!\n";
        cout << "How many De Anza Burger?\n";
        cin >> quantity1;
    }

    cout << "How many Bacon Cheese?\n";
    cin >> quantity2;

    while (!(validate(quantity2))) {
        cout << "Invalid input!\n";
        cout << "How many Bacon Cheese?\n";
        cin >> quantity2;
    }

    cout << "How many Mushroom Swiss?\n";
    cin >> quantity3;

    while (!(validate(quantity3))) {
        cout << "Invalid input!\n";
        cout << "How many Mushroom Swiss?\n";
        cin >> quantity3;
    }

    cout << "How many Western Burger?\n";
    cin >> quantity4;

    while (!(validate(quantity4))) {
        cout << "Invalid input!\n";
        cout << "How many Western Burger?\n";
        cin >> quantity4;
    }

    cout << "How many Don Cali Burger?\n";
    cin >> quantity5;

    while (!(validate(quantity5))) {
        cout << "Invalid input!\n";
        cout << "How many Don Cali Burger?\n";
        cin >> quantity5;
    }
    
    priceBeforeTax = calcPriceBeforeTax(quantity1, quantity2, quantity3, quantity4, quantity5);

    cout << "Are you a student? 'y' or 'n': ";
    cin >> student;

    if (student == 'n') {
        total = calcTax(priceBeforeTax);
        tax = priceBeforeTax * .10;
    }
    else {
        total = priceBeforeTax;
        tax = 0.0;
    }


    cout << fixed << setprecision(2);
    cout << "The bill includes:\n";
    cout << quantity1 << " De Anza Burger(s) for $" << quantity1 * 5.25 << endl;
    cout << quantity2 << " Bacon Cheeseburger(s) for $" << quantity2 * 5.75 << endl;
    cout << quantity3 << " Mushroom Swiss Burger(s) for $" << quantity3 * 5.95 << endl;
    cout << quantity4 << " Western Burger(s) for $" << quantity4 * 5.95 << endl;
    cout << quantity5 << " Don Cali Burger(s) for $" << quantity5 * 5.95 << endl;
    cout << "Subtotal is: $" << priceBeforeTax << endl;
    cout << "Tax is: $" << tax << endl;
    cout << "Total is: $" << total << endl;

    ofstream outfile("output.txt");

    outfile << fixed << setprecision(2);
    outfile << "The bill includes:\n";
    outfile << quantity1 << " De Anza Burger(s) for $" << quantity1 * 5.25 << endl;
    outfile << quantity2 << " Bacon Cheeseburger(s) for $" << quantity2 * 5.75 << endl;
    outfile << quantity3 << " Mushroom Swiss Burger(s) for $" << quantity3 * 5.95 << endl;
    outfile << quantity4 << " Western Burger(s) for $" << quantity4 * 5.95 << endl;
    outfile << quantity5 << " Don Cali Burger(s) for $" << quantity5 * 5.95 << endl;
    outfile << "Subtotal is: $" << priceBeforeTax << endl;
    outfile << "Tax is: $" << tax << endl;
    outfile << "Total is: $" << total << endl;

    outfile.close();

    return 0;
}

/*
Output:
The bill includes:
0 De Anza Burger(s) for $0.00
2 Bacon Cheeseburger(s) for $11.50
0 Mushroom Swiss Burger(s) for $0.00
3 Western Burger(s) for $17.85
0 Don Cali Burger(s) for $0.00
Subtotal is: $29.35
Tax is: $2.94
Total is: $2.94
*/

double calcPriceBeforeTax(int amount1, int amount2, int amount3, int amount4, int amount5) {
    double price = 0.0;

    price += amount1 * 5.25;
    price += amount2 * 5.75;
    price += amount3 * 5.95;
    price += amount4 * 5.95;
    price += amount5 * 5.95;

    return price;
}

double calcTax(double subtotal) {
    double tax = 0.0;

    tax = subtotal * .10;

    return tax;
}

bool validate(int choice) {
    if (choice < 0) {
        return false;
    }
    return true;
}
