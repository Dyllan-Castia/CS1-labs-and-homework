/*
Dyllan Castia
2/23/26
This program: Takes on the persona of a loud and strict P.E. Teacher.
1. Asks the user how much they weigh.
2. Checks for valid weight.
3. Asks the user how tall they are.
4. Checks for valid height
5. If not valid height, the program gives the user 1 more chance
6. Checks for valid height again.
7. Calculates BMI of the user
8. Returns a potentially, mildly offensive answer lol.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double height, weight, bmi;

    cout << "Alright you lazy bum lets see what your BMI is!" << endl;
    cout << "How much do you weigh?" << endl;
    cin >> weight;
    if (weight <= 0) {
        cout << "Nice try smart ass. Give me your real weight." << endl;
        return 0;
    }
    else if (weight > 210.0) {
        cout << "Damn, hopefully you are really tall!" << endl;
    }
    else {
        cout << "So far so good." << endl;
    }

    cout << "How tall are you?\n";
    cout << "Enter height in inches: ";
    cin >> height;

    if (height <= 0) {
        cout << "Ain't nobody that short! Give me your real height! \n I'll give you one more chance!\n";
        cout << "How tall are you?: ";
        cin >> height;
        if (height < 1.0) {
            cout << "Thats it! I'm about to crash out!\n";
            cout << "Re-run the program and enter a valid height.";
            return 0;
        }
        else {
            cout << "Okay lets get your BMI now... one moment." << endl;
        }
    }
    else {
        cout << "Okay lets get your BMI now... one moment." << endl;
    }

    bmi = (weight * 703.0) / pow(height, 2.0);

    if ((bmi >= 18.5) && (bmi <= 25.0)) {
        cout << "Great, looks like you have an optimal BMI. Carry on.";
    }
    else if (bmi < 18.5) {
        cout << "You are underweight, make sure you are eating enough.";
    }
    else {
        cout << "You are overweight! Get your butt in the gym pronto and lay off the Big Macs!";
    }
    return 0;
}
/*
Output 1:
Alright you lazy bum lets see what your BMI is!
How much do you weigh?
180
So far so good.
How tall are you?
Enter height in inches: 70
Okay lets get your BMI now... one moment.
You are overweight! Get your butt in the gym pronto and lay off the Big Macs!
*/
//Note: This is my BMI :'(

/*
Output 2: 
Alright you lazy bum lets see what your BMI is!
How much do you weigh?
170
So far so good.
How tall are you?
Enter height in inches: 0
Ain't nobody that short! Give me your real height! 
 I'll give you one more chance!
How tall are you?: 70
Okay lets get your BMI now... one moment.
Great, looks like you have an optimal BMI. Carry on.
*/

/*
Output 3:
Alright you lazy bum lets see what your BMI is!
How much do you weigh?
120
So far so good.
How tall are you?
Enter height in inches: 70
Okay lets get your BMI now... one moment.
You are underweight, make sure you are eating enough.
*/

/*
Output 4:
Alright you lazy bum lets see what your BMI is!
How much do you weigh?
170
So far so good.
How tall are you?
Enter height in inches: 0
Ain't nobody that short! Give me your real height! 
 I'll give you one more chance!
How tall are you?: -1
Thats it! I'm about to crash out!
Re-run the program and enter a valid height.
*/

/*
Output 5:
Alright you lazy bum lets see what your BMI is!
How much do you weigh?
250
Damn, hopefully you are really tall!
How tall are you?
Enter height in inches: 90
Okay lets get your BMI now... one moment.
Great, looks like you have an optimal BMI. Carry on.
*/
