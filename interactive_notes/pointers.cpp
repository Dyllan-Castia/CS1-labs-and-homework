#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printAddress(int *ptr);
void swap(int *, int *);
void printAddressAndContent(int *);
void displayPayRates(const double *rates, int size);
void printErrorExample(const int * const, const int);

int main() {
    int address = 7;
    int swap1 = 2, swap2 = -3;
    int addressAndValue; //Value is entered by user
    int notConst = 22; const int IS_CONST = 33;

    string echo; //stop program output (poorly)

    const int SIZE = 6;
    const double payRates[SIZE] = {18.50, 17.35, 20.50, 21.75, 30.00, 35.50};

    int * const ptrVarIsConst = &notConst; //Constant pointer(address is constant) (value can change)
    cout << "ptrVarIsConst address is constant: " << ptrVarIsConst;
    cout << "'s address CANNOT change!\n" << "notConst value is not constant: ";
    cout << notConst << "'s value CAN change!" << endl;
    cout << "Enter \"echo\" to continue: ";
    cin >> echo;
    echo = "";
    cout << "--------------------------\n";

    //vv A constant pointer that points to a constant
    const int * const constPtsToConst = &IS_CONST;
    //^^ a pointer that cannot point to anything except what it is pointing to

    cout << "constPtsToConst's address is a constant: " << constPtsToConst;
    cout << "'s address CANNOT change. \nIt's value named IS_CONST: ";
    cout << " is also constant. It's value: " << IS_CONST;
    cout << " CANNOT change either.\n";
    cout << "*******************\n";
    printErrorExample(constPtsToConst, IS_CONST);
    cout << "Enter \"echo\" to continue: ";
    cin >> echo;
    echo = "";
    cout << endl;

    cout << "--------------------------\n";
    cout << "Use pointer to print adress: ";
    printAddress(&address); //prints 0x87dd9ffda4
    cout << endl;

    cout << "--------------------------\n";
    cout << "User pointers to swap values of variables: ";
    swap(&swap1, &swap2);
    cout << swap1 << " " << swap2 << endl; //prints -3 2
    cout << endl;

    cout << "--------------------------\n";
    cout << "Use pointer to print address and value: ";
    printAddressAndContent(&addressAndValue); 
    //^^ prints address: 0x87dd9ffd98 and value stored there: 99

    cout << "--------------------------\n";
    cout << endl;
    cout << "Use pointer to a constant to print contents of an array:\n";
    displayPayRates(payRates, SIZE); //prints payRate array
        /*Output
        Pay rate for employee 1 is $18.50
        Pay rate for employee 2 is $17.35
        Pay rate for employee 3 is $20.50
        Pay rate for employee 4 is $21.75
        Pay rate for employee 5 is $30.00
        Pay rate for employee 6 is $35.50
        */
    
    return 0;
}

void printAddress(int *ptr) {
    cout << ptr << endl;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x= *y;
    *y = temp;
}

void printAddressAndContent(int *ptr) {
    cout << "Enter an integer: ";
    cin >> *ptr;
    cout << ptr << " " << *ptr << endl;
}

//vv Par1 is a pointer to a const (adress can change) vv
//                   vvvvvvvvvvvvvvvvvvv
void displayPayRates(const double *rates, int size) {
    cout << fixed << setprecision(2);
    for (int count = 0; count < size; count++) {
        cout << "Pay rate for employee " << (count + 1)
            << " is $" << *(rates + count) << endl; //increment address of rates by count
    }
}

void printErrorExample(const int * const constPconst, const int constValue){
    cout <<"constPtsToConst = &diffAdress;" << endl;
    cout << "Address cannot change you doofus, it must remain: ";
    cout << constPconst << endl;
    cout << "*******************\n";
    cout << "IS_CONST = 69; //Another value" << endl;
    cout << "Value cannot change either dude...\n";
}

/*
Output:

ptrVarIsConst address is constant: 0xcd84bffc14's address CANNOT change!
notConst value is not constant: 22's value CAN change!
Enter "echo" to continue: echo
--------------------------
constPtsToConst's address is a constant: 0xcd84bffc10's address CANNOT change. 
It's value named IS_CONST:  is also constant. It's value: 33 CANNOT change either.
*******************
constPtsToConst = &diffAdress;
Address cannot change you doofus, it must remain: 0xcd84bffc10
*******************
IS_CONST = 69; //Another value
Value cannot change either dude...
Enter "echo" to continue: echo

--------------------------
Use pointer to print adress: 0xcd84bffc24

--------------------------
User pointers to swap values of variables: -3 2

--------------------------
Use pointer to print address and value: Enter an integer: 55
0xcd84bffc18 55
--------------------------

Use pointer to a constant to print contents of an array:
Pay rate for employee 1 is $18.50
Pay rate for employee 2 is $17.35
Pay rate for employee 3 is $20.50
Pay rate for employee 4 is $21.75
Pay rate for employee 5 is $30.00
Pay rate for employee 6 is $35.50
*/
