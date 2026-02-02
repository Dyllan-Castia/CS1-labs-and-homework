/*Develop a program that will determine the area and perimeter of a rectangle (use 
problem 3 as a starting point). The length and width can be given as constants. 
(LENGTH=8 WIDTH=3)
*/

#include <iostream> 
using namespace std;
const double LENGTH = 8.0;
const double WIDTH = 3.0;
int main() 
{ 
double area;
double perimeter;
area = LENGTH * WIDTH;
perimeter = 2 * (LENGTH + WIDTH);
cout << "Area = " << area << endl;
cout << "Perimeter = " << perimeter << endl;
return 0; 
}
/*
output:
Area = 24
Perimeter = 22
*/
