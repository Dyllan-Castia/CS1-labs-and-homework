#include "circle.cpp"
#include <iostream>
using namespace std;


int main()
{
  Circle circle1(25);
  Circle circle2(50);
  Circle circle3(100);

  cout << "The area of the circle of radius "
    << circle1.getRadius() << " is " << circle1.getArea() << endl;
  cout << "The perimeter of the circle of radius "
   << circle1.getRadius() << " is " << circle1.getPerimeter() << endl;
  cout << "The area of the circle of radius "
    << circle2.getRadius() << " is " << circle2.getArea() << endl;
    cout << "The perimeter of the circle of radius "
   << circle2.getRadius() << " is " << circle2.getPerimeter() << endl;
  cout << "The area of the circle of radius "
    << circle3.getRadius() << " is " << circle3.getArea() << endl;
    cout << "The perimeter of the circle of radius "
   << circle3.getRadius() << " is " << circle3.getPerimeter() << endl;

  // Modify circle radius
  circle2.setRadius(200);
  cout << "Circle 2 modified." << endl;

  cout << "The area of the circle of radius "
    << circle2.getRadius() << " is " << circle2.getArea() << endl;
  cout << "The perimeter of the circle of radius "
   << circle2.getRadius() << " is " << circle2.getPerimeter() << endl;

  return 0;
}

/*
Output:
The area of the circle of radius 25 is 1963.49
The perimeter of the circle of radius 25 is 157.079
The area of the circle of radius 50 is 7853.97
The perimeter of the circle of radius 50 is 314.159
The area of the circle of radius 100 is 31415.9
The perimeter of the circle of radius 100 is 628.318
Circle 2 modified.
The area of the circle of radius 200 is 125664
The perimeter of the circle of radius 200 is 1256.64
*/
