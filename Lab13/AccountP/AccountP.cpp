/*
Dyllan Castia
4/27/26
This program:
1. Contains AccountP Method definitions
*/

#include "AccountP.h"
#include <string>
using namespace std;

AccountP :: AccountP() {
    username = "";
    favoriteGame = "";
    age = 0;
    numCats = 0;
}
AccountP :: AccountP(string name, int newAge, string game, int cats) {
    username = name;
    age = newAge;
    favoriteGame = game;
    numCats = cats;
}

string AccountP :: getUsername() const {
    return username;
}

string AccountP :: getFavGame() const {
    return favoriteGame;
}

int AccountP :: getAge() const {
    return age;
}

int AccountP :: getCats() const {
    return numCats;
}

void AccountP :: setUsername(string newName) {
    username = newName;
}

void AccountP :: setFavGame(string newGame) {
    favoriteGame = newGame;
}

void AccountP :: setAge(int newAge){
    age = newAge;
}

void AccountP :: setCats(int cats) {
    numCats = cats;
}
