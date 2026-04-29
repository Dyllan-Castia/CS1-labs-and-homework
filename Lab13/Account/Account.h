/*
Dyllan Castia
4/27/26
This program:
1. Is a specification file for class: Account
*/
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;


class Account {
    public:
    //attributes
        string username;
        string favoriteGame;
        int age;
        int numCats;

    //methods
        Account();//constructor
        string getUsername() const;
        string getFavGame() const;
        int getAge() const;
        int getCats() const;
        void setUsername(string);
        void setFavGame(string);
        void setAge(int);
        void setCats(int);
};

#endif
