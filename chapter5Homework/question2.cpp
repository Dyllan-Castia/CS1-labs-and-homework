/*
Dyllan Castia
3/2/26
This program:
1. Checks for open file error
2. Reads a file into 6 variables representing 6 years.
(Checks for correctly assigned variables)
3. Outputs a barchart with population represented by "*"s for years 1900 - 2000
every 20 years.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
#include <fstream> 
#include <string>
using namespace std;

int main() {
    int y1900 = 0, y1920 = 0, y1940 = 0, y1960 = 0, y1980 = 0, y2000 = 0;

    //vv Read file contents into year variables vv
    ifstream infile("people.txt");

    //vv Handle file read errors vv
    if (!infile) {
        cout << "Error: file not opened. Check working directory.";
        return 1;
    }
    //vv Read file into variables and check for valid file content vv
    if(!(infile >> y1900 >> y1920 >> y1940 >> y1960 >> y1980 >> y2000)) {
        cout << "Error: File does not contain 6 valid integers.";
        return 1;
    }

    infile.close(); //close file after reading

    cout << "Here is a population bar chart for Prairieville from 1900 - 2000\n";
    
    int count;
    string bar1900, bar1920, bar1940, bar1960, bar1980, bar2000; //define bar strings

    //vv Initialize bar strings with correct amount of stars vv
    for (count = 0; count < y1900 / 1000; count ++) {
        bar1900 += "*";
    }
    for (count = 0; count < y1920 / 1000; count ++) {
        bar1920 += "*";
    }
    for (count = 0; count < y1940 / 1000; count ++) {
        bar1940 += "*";
    }
    for (count = 0; count < y1960 / 1000; count ++) {
        bar1960 += "*";
    }
    for (count = 0; count < y1980 / 1000; count ++) {
        bar1980 += "*";
    }
    for (count = 0; count < y2000 / 1000; count ++) {
        bar2000 += "*";
    }

    //vv Barchart output vv
    cout << "Each \"*\" equals 1000 people." << endl;
    cout << "1900: " << bar1900 << endl;
    cout << "1920: " << bar1920 << endl;
    cout << "1940: " << bar1940 << endl;
    cout << "1960: " << bar1960 << endl;
    cout << "1980: " << bar1980 << endl;
    cout << "2000: " << bar2000 << endl;

    return 0;
}

/*
Output: 
Here is a population bar chart for Prairieville from 1900 - 2000
Each "*" equals 1000 people.
1900: **
1920: ****
1940: *****
1960: *********
1980: **************
2000: ******************
*/
