#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

#include "GeometricObject.h"

class Rectangle : public GeometricObject
{
private:

  double length, width;

public:

  Rectangle();
  Rectangle(double _length, double _width);
  Rectangle(double _length, double _width, const std::string &_color, bool _filled);

  void setWidth(double _width);
  void setLength(double _length);

  double getWidth() const;
  double getLength() const;
  double getArea() const;
  double getPerimeter() const;

  std::string toString() const;

};

#endif
