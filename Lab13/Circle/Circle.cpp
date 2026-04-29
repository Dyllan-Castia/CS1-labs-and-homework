#include "Circle.h"
using namespace std;

// Construct a default circle object
  Circle::Circle() {}

  double Circle::getRadius() {
    return radius;
  }

  // Construct a circle object
  Circle::Circle(double newRadius)
  {
    radius = newRadius;
  }

  // Return the area of this circle
  double Circle::getArea()
  {
    return radius * radius * 3.14159;
  }

  // Return the perimeter of this circle 
  double Circle::getPerimeter()
  {
    return 2 * radius * 3.14159;
  }

  // Set new radius for this circle 
  void Circle::setRadius(double newRadius)
  {
    radius = newRadius;
  }
