#include "Circle.h"
#include "Circle.cpp"
#include "GeometricObject.h"
#include "GeometricObject.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"

#include <iostream>


int main()
{

  GeometricObject shape;

  GeometricObject myShape("Red", false);
  std::cout << shape.toString() << std::endl;
  std::cout << "Color: " << shape.getColor() << std::endl;
  std::cout << "Filled: " << shape.getFilled() << std::endl << std::endl;

  Circle circle1(3.5);

  std::cout << circle1.toString() << std::endl;
  std::cout << "Area: " << circle1.getArea() << std::endl;
  std::cout << "Perimeter: " << circle1.getPerimeter() << std::endl << std::endl;

  Rectangle rec1;

  Rectangle rec2(4, 7);

  std::string color = "Blue";

  Rectangle rec3(4, 7, color, false);
}
