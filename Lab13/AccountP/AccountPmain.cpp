/*
Dyllan Castia
4/27/26
This program:
1. Creates 3 account objects
2. Set's their attributes
3. Displays all attributes for each object
*/

#include "AccountP.cpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //vv Construct Account Objects
    AccountP NullBoyJack;
    AccountP KimF;
    AccountP EvanO;

    //Set Kim attributes
    KimF.setUsername("KN.Fedi");
    KimF.setFavGame("Squishes");
    KimF.setAge(33);
    KimF.setCats(1);

    //Set Jayson attributes
    EvanO.setUsername("Eroincubus");
    EvanO.setFavGame("Arc Raiders");
    EvanO.setAge(29);
    EvanO.setCats(12);

    //Access Private Members attempt
    cout << NullBoyJack.username << endl;
    cout << NullBoyJack.age << endl;
    cout << NullBoyJack.favoriteGame << endl;
    cout << NullBoyJack.numCats << endl;

    cout << EvanO.username << endl;
    cout << EvanO.age << endl;
    cout << EvanO.favoriteGame << endl;
    cout << EvanO.numCats << endl;

    cout << KimF.username << endl;
    cout << KimF.age << endl;
    cout << KimF.favoriteGame << endl;
    cout << KimF.numCats << endl;

    cout << left; //Justify left

    //Display Jack
    cout << setw(25) << "Jack's Username: " << NullBoyJack.getUsername() << endl;
    cout << setw(25) << "Jack's Age: " << NullBoyJack.getAge() << endl;
    cout << setw(25) << "Jack's Favorite Game: " << NullBoyJack.getFavGame() << endl;
    cout << setw(25) << "Cats Jack has:  " << NullBoyJack.getCats() << endl;
    cout << "All work and no instantiation makes Jack a null boy.\n";
    cout << "All work and no instantiation makes Jack a null boy.\n";
    cout << "All work and no instantiation makes Jack a null boy.\n";
    cout << "All work and no instantiation makes Jack a null boy.\n";
    cout << "\n---------------------------------\n\n";

    //Display Kim
    cout << setw(25) << "Kim's Username: " << KimF.getUsername() << endl;
    cout << setw(25) << "Kim's Age: " << KimF.getAge() << endl;
    cout << setw(25) << "Kim's Favorite Game: " << KimF.getFavGame() << endl;
    cout << setw(25) << "Cats Kim has: " << KimF.getCats() << endl;
    cout << "\n---------------------------------\n\n";

    //Display Evan
    cout << setw(25) << "Evan's Username: " << EvanO.getUsername() << endl;
    cout << setw(25) << "Evan's Age: " << EvanO.getAge() << endl;
    cout << setw(25) << "Evan's Favorite Game: " << EvanO.getFavGame() << endl;
    cout << setw(25) << "Cats Evan has: " << EvanO.getCats() << endl;

    return 0;
}

/*
Output with no errors:
Jack's Username:         
Jack's Age:              0
Jack's Favorite Game:    
Cats Jack has:           0
All work and no instantiation makes Jack a null boy.
All work and no instantiation makes Jack a null boy.
All work and no instantiation makes Jack a null boy.
All work and no instantiation makes Jack a null boy.

---------------------------------

Kim's Username:          KN.Fedi
Kim's Age:               33
Kim's Favorite Game:     Squishes
Cats Kim has:            1

---------------------------------

Evan's Username:         Eroincubus
Evan's Age:              29
Evan's Favorite Game:    Arc Raiders
Cats Evan has:           12
*/

/*
Compile message with errors:
Starting build...
cmd /c chcp 65001>nul && C:\Users\casti\OneDrive\Pictures\compilers\mingw64\bin\g++.exe -fdiagnostics-color=always -g C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp -o C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.exe
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp: In function 'int main()':
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:35:25: error: 'std::string AccountP::username' is private within this context
   35 |     cout << NullBoyJack.username << endl;
      |                         ^~~~~~~~
In file included from C:\Users\casti\OneDrive\Documents\education\c++\AccountP.cpp:8,
                 from C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:10:
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:16:16: note: declared private here
   16 |         string username;
      |                ^~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:36:25: error: 'int AccountP::age' is private within this context
   36 |     cout << NullBoyJack.age << endl;
      |                         ^~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:18:13: note: declared private here
   18 |         int age;
      |             ^~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:36:25: note: field 'int AccountP::age' can be accessed via 'int AccountP::getAge() const'
   36 |     cout << NullBoyJack.age << endl;
      |                         ^~~
      |                         getAge()
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:37:25: error: 'std::string AccountP::favoriteGame' is private within this context
   37 |     cout << NullBoyJack.favoriteGame << endl;
      |                         ^~~~~~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:17:16: note: declared private here
   17 |         string favoriteGame;
      |                ^~~~~~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:38:25: error: 'int AccountP::numCats' is private within this context
   38 |     cout << NullBoyJack.numCats << endl;
      |                         ^~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:19:13: note: declared private here
   19 |         int numCats;
      |             ^~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:38:25: note: field 'int AccountP::numCats' can be accessed via 'int AccountP::getCats() const'
   38 |     cout << NullBoyJack.numCats << endl;
      |                         ^~~~~~~
      |                         getCats()
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:40:19: error: 'std::string AccountP::username' is private within this context
   40 |     cout << EvanO.username << endl;
      |                   ^~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:16:16: note: declared private here
   16 |         string username;
      |                ^~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:41:19: error: 'int AccountP::age' is private within this context
   41 |     cout << EvanO.age << endl;
      |                   ^~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:18:13: note: declared private here
   18 |         int age;
      |             ^~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:41:19: note: field 'int AccountP::age' can be accessed via 'int AccountP::getAge() const'
   41 |     cout << EvanO.age << endl;
      |                   ^~~
      |                   getAge()
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:42:19: error: 'std::string AccountP::favoriteGame' is private within this context
   42 |     cout << EvanO.favoriteGame << endl;
      |                   ^~~~~~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:17:16: note: declared private here
   17 |         string favoriteGame;
      |                ^~~~~~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:43:19: error: 'int AccountP::numCats' is private within this context
   43 |     cout << EvanO.numCats << endl;
      |                   ^~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:19:13: note: declared private here
   19 |         int numCats;
      |             ^~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:43:19: note: field 'int AccountP::numCats' can be accessed via 'int AccountP::getCats() const'
   43 |     cout << EvanO.numCats << endl;
      |                   ^~~~~~~
      |                   getCats()
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:45:18: error: 'std::string AccountP::username' is private within this context
   45 |     cout << KimF.username << endl;
      |                  ^~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:16:16: note: declared private here
   16 |         string username;
      |                ^~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:46:18: error: 'int AccountP::age' is private within this context
   46 |     cout << KimF.age << endl;
      |                  ^~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:18:13: note: declared private here
   18 |         int age;
      |             ^~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:46:18: note: field 'int AccountP::age' can be accessed via 'int AccountP::getAge() const'
   46 |     cout << KimF.age << endl;
      |                  ^~~
      |                  getAge()
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:47:18: error: 'std::string AccountP::favoriteGame' is private within this context
   47 |     cout << KimF.favoriteGame << endl;
      |                  ^~~~~~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:17:16: note: declared private here
   17 |         string favoriteGame;
      |                ^~~~~~~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:48:18: error: 'int AccountP::numCats' is private within this context
   48 |     cout << KimF.numCats << endl;
      |                  ^~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountP.h:19:13: note: declared private here
   19 |         int numCats;
      |             ^~~~~~~
C:\Users\casti\OneDrive\Documents\education\c++\AccountPmain.cpp:48:18: note: field 'int AccountP::numCats' can be accessed via 'int AccountP::getCats() const'
   48 |     cout << KimF.numCats << endl;
      |                  ^~~~~~~
      |                  getCats()

Build finished with error(s).

The terminal process terminated with exit code: -1.
*/
