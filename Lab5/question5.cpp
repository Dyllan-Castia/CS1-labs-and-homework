/*
Dyllan Castia
2/25/26
This program:
1. Asks the user how many years they want to track rainfall in. (checks validity against 0 or -years)
2. Asks the user how much rainfall we had for each month in each year. (checks against -rainfall)
3. Calculates the average rainfall for all the months passed.
4. Displays a message with the total amount of months passed, average rainfall for all months,
and total rainfall in inches.
*/

#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    //vvv Define Variables vvv
    double rainfall = 0, avgRainPerMonth = 0, totalRainfall = 0; //Inches
    int years, count, monthsCount, totalMonths;

    //vvv Initialize counts vvv
    count = 1;
    totalMonths = 0;

    cout << fixed << setprecision(2); //format for 2 decimals

    cout << "How many years will we be using to calculate the average rainfall?" << endl;
    cout << "Total years: ";
    cin >> years; //Get first input

    while (years < 1) { //non-zero/non-negative year check
        cout << "Invalid input!\nPlease enter a number greater than 0: ";
        cin >> years;
    }

    while (count <= years) { //outer loop
        monthsCount = 1;
        double yearRainfall = 0;
        while (monthsCount <= 12) { //inner loop
            cout << "How much rainfall did we experience in month " << monthsCount;
            cout << " in year " << count << "?" << endl;
            cout << "Rainfall in inches: ";
            cin >> rainfall;

                while (rainfall < 0) { //non-negative rainfall check
                    cout << "Invalid input! Rainfall cannot be negative.\n";
                    cout << "Rainfall in inches: ";
                    cin >> rainfall;
                }
                // vvv update count variables and totals vvv
            totalRainfall += rainfall; 
            yearRainfall += rainfall;
            totalMonths++;
            monthsCount++;
        }
        cout << "Year " << count << " had " << yearRainfall << " inches of rainfall." << endl;
        count++; //update count variable
    }
    avgRainPerMonth = totalRainfall / totalMonths; //calculate average

    //vvv Output message vvv
    cout << totalMonths << " Months have passed." << endl;
    cout << "We had " << totalRainfall << " inches of rainfall." << endl;
    cout << "The average rainfall in " << totalMonths << " months was " << avgRainPerMonth;
    cout << " inches." << endl; 

    return 0;
}

/*
Output 1:
How many years will we be using to calculate the average rainfall?
Total years: 1
How much rainfall did we experience in month 1 in year 1?
Rainfall in inches: 3
How much rainfall did we experience in month 2 in year 1?
Rainfall in inches: 2.5
How much rainfall did we experience in month 3 in year 1?
Rainfall in inches: 2
How much rainfall did we experience in month 4 in year 1?
Rainfall in inches: 1.5
How much rainfall did we experience in month 5 in year 1?
Rainfall in inches: .5
How much rainfall did we experience in month 6 in year 1?
Rainfall in inches: 0
How much rainfall did we experience in month 7 in year 1?
Rainfall in inches: 0
How much rainfall did we experience in month 8 in year 1?
Rainfall in inches: 0
How much rainfall did we experience in month 9 in year 1?
Rainfall in inches: 1.7
How much rainfall did we experience in month 10 in year 1?
Rainfall in inches: 1.8
How much rainfall did we experience in month 11 in year 1?
Rainfall in inches: 2.5
How much rainfall did we experience in month 12 in year 1?
Rainfall in inches: 3
Year 1 had 18.50 inches of rainfall.
12 Months have passed.
We had 18.50 inches of rainfall.
The average rainfall in 12 months was 1.54 inches.
*/

/*
Output 2:
How many years will we be using to calculate the average rainfall?
Total years: 2
How much rainfall did we experience in month 1 in year 1?
Rainfall in inches: 3
How much rainfall did we experience in month 2 in year 1?
Rainfall in inches: 2.5
How much rainfall did we experience in month 3 in year 1?
Rainfall in inches: 2
How much rainfall did we experience in month 4 in year 1?
Rainfall in inches: 1.5
How much rainfall did we experience in month 5 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 6 in year 1?
Rainfall in inches: 0
How much rainfall did we experience in month 7 in year 1?
Rainfall in inches: 0
How much rainfall did we experience in month 8 in year 1?
Rainfall in inches: 0
How much rainfall did we experience in month 9 in year 1?
Rainfall in inches: 1.5
How much rainfall did we experience in month 10 in year 1?
Rainfall in inches: 2
How much rainfall did we experience in month 11 in year 1?
Rainfall in inches: 2.5
How much rainfall did we experience in month 12 in year 1?
Rainfall in inches: 3
Year 1 had 19.00 inches of rainfall.
How much rainfall did we experience in month 1 in year 2?
Rainfall in inches: 3
How much rainfall did we experience in month 2 in year 2?
Rainfall in inches: 2.5
How much rainfall did we experience in month 3 in year 2?
Rainfall in inches: 2
How much rainfall did we experience in month 4 in year 2?
Rainfall in inches: 1.5
How much rainfall did we experience in month 5 in year 2?
Rainfall in inches: 1
How much rainfall did we experience in month 6 in year 2?
Rainfall in inches: .5
How much rainfall did we experience in month 7 in year 2?
Rainfall in inches: 0
How much rainfall did we experience in month 8 in year 2?
Rainfall in inches: 0
How much rainfall did we experience in month 9 in year 2?
Rainfall in inches: .8
How much rainfall did we experience in month 10 in year 2?
Rainfall in inches: 1.5
How much rainfall did we experience in month 11 in year 2?
Rainfall in inches: 2
How much rainfall did we experience in month 12 in year 2?
Rainfall in inches: 3
Year 2 had 17.80 inches of rainfall.
24 Months have passed.
We had 36.80 inches of rainfall.
The average rainfall in 24 months was 1.53 inches.
*/

/*
Output 3:
How many years will we be using to calculate the average rainfall?
Total years: 0
Invalid input!
Please enter a number greater than 0: 1
How much rainfall did we experience in month 1 in year 1?
Rainfall in inches: -1
Invalid input! Rainfall cannot be negative.
Rainfall in inches: 1
How much rainfall did we experience in month 2 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 3 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 4 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 5 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 6 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 7 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 8 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 9 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 10 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 11 in year 1?
Rainfall in inches: 1
How much rainfall did we experience in month 12 in year 1?
Rainfall in inches: 1
Year 1 had 12.00 inches of rainfall.
12 Months have passed.
We had 12.00 inches of rainfall.
The average rainfall in 12 months was 1.00 inches.
*/
