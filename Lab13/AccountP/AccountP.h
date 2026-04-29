/*
Dyllan Castia
4/27/26
This program:
1. Is a specification file for class: Account
*/
#ifndef ACCOUNTP_H
#define ACCOUNTP_H
#include <string>
using namespace std;


class AccountP {
    private:
    //attributes
        string username;
        string favoriteGame;
        int age;
        int numCats;

    public:
    //methods
        AccountP();//constructor with defaults
        AccountP(string, int, string, int); //constructor with parameters
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
