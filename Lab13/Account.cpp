/*
Dyllan Castia
4/27/26
This program:
1. Contains Account Method definitions
*/

#include "Account.h"
#include <string>
using namespace std;

Account :: Account() {
    username = "";
    favoriteGame = "";
    age = 0;
    numCats = 0;
}

string Account :: getUsername() const {
    return username;
}

string Account :: getFavGame() const {
    return favoriteGame;
}

int Account :: getAge() const {
    return age;
}

int Account :: getCats() const {
    return numCats;
}

void Account :: setUsername(string newName) {
    username = newName;
}

void Account :: setFavGame(string newGame) {
    favoriteGame = newGame;
}

void Account :: setAge(int newAge){
    age = newAge;
}

void Account :: setCats(int cats) {
    numCats = cats;
}
