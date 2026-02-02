/*Dyllan Castia, 1/28/26
Lab 2, Question 2: This program predicts the amount of revenue
the East Coast sales division will generate if the company's total revenue
is $8.6 million and the East Coast Division usually generates 58%
of the company's total revenue.
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int revenue = 8600000;
double sales_division_percentage = .58 * revenue;

int main() {
    std::cout << std::fixed << std::setprecision(2);
    cout << "The East Coast sales division will generate $" << sales_division_percentage;
    cout << " of the company's total revenue ";
    cout << "if the company's revenue is $" << revenue << "." << endl;
    return 0;
}
/*The East Coast sales division will generate $4988000.00 
of the company's total revenue if the company's 
revenue is $8600000.  */
