#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
  double radius = 1.0;

public:
  
  //Radius getter
  double getRadius();

  // Construct a default circle object
  Circle();

  // Construct a circle object
  Circle(double);

  // Return the area of this circle
  double getArea();
  

  // Return the perimeter of this circle 
  double getPerimeter();

  // Set new radius for this circle 
  void setRadius(double);
}; // Must place a semicolon here
#endif
