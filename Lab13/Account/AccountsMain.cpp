/*
Dyllan Castia
4/27/26
This program:
1. Creates 3 account objects
2. Set's their attributes
3. Displays all attributes for each object
*/

#include "Account.cpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //vv Construct Account Objects
    Account DyllanC;
    Account TylerB;
    Account JaysonH;

    //Set Dyllan attributes
    DyllanC.setUsername("The Dillweed");
    DyllanC.setFavGame("Root");
    DyllanC.setAge(31);
    DyllanC.setCats(1);

    //Set Tyler attributes
    TylerB.setUsername("McKey Chapo");
    TylerB.setFavGame("Escape From Tarkov");
    TylerB.setAge(30);
    TylerB.setCats(2);

    //Set Jayson attributes
    JaysonH.setUsername("Chapstick Allen");
    JaysonH.setFavGame("PUBG");
    JaysonH.setAge(31);
    JaysonH.setCats(1);

    cout << left; //Justify left

    //Display Dyllan
    cout << setw(25) << "Dyllan's Username: " << DyllanC.getUsername() << endl;
    cout << setw(25) << "Dyllan's Age: " << DyllanC.getAge() << endl;
    cout << setw(25) << "Dyllan's Favorite Game: " << DyllanC.getFavGame() << endl;
    cout << setw(25) << "Cats Dyllan has:  " << DyllanC.getCats() << endl;
    cout << "\n---------------------------------\n\n";

    //Display Tyler
    cout << setw(25) << "Tyler's Username: " << TylerB.getUsername() << endl;
    cout << setw(25) << "Tyler's Age: " << TylerB.getAge() << endl;
    cout << setw(25) << "Tyler's Favorite Game: " << TylerB.getFavGame() << endl;
    cout << setw(25) << "Cats Tyler has: " << TylerB.getCats() << endl;
    cout << "\n---------------------------------\n\n";

    //Display Jayson
    cout << setw(25) << "Jayson's Username: " << JaysonH.getUsername() << endl;
    cout << setw(25) << "Jayson's Age: " << JaysonH.getAge() << endl;
    cout << setw(25) << "Jayson's Favorite Game: " << JaysonH.getFavGame() << endl;
    cout << setw(25) << "Cats Jayson has: " << JaysonH.getCats() << endl;

    return 0;
}

/*
Output:
Dyllan's Username:       The Dillweed
Dyllan's Age:            31
Dyllan's Favorite Game:  Root
Cats Dyllan has:         1

---------------------------------

Tyler's Username:        McKey Chapo
Tyler's Age:             30
Tyler's Favorite Game:   Escape From Tarkov
Cats Tyler has:          2

---------------------------------

Jayson's Username:       Chapstick Allen
Jayson's Age:            31
Jayson's Favorite Game:  PUBG
Cats Jayson has:         1
*/
