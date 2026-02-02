#include <iostream> 
using namespace std; 
 
const  double PI = 3.14; 
const  double RADIUS = 5.4; 
 
int main() 
{ 
double area;// definition of area of circle 
 
double circumference;// definition of circumference 
 
circumference = 2 * PI * RADIUS;// computes circumference 
 
area = PI * RADIUS * RADIUS;// computes area 
 
  // Fill in the code for the cout statement that will output (with description)  
// the circumference
cout << "Circumference = " << circumference << endl;
// Fill in the code for the cout statement that will output (with description)  
// the area of the circle 
cout << "Area = " << area << endl;
return 0; 
}
/*output
Circumference = 33.912
Area = 91.5624
*/
