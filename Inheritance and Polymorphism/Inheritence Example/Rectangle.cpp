#include "Rectangle.h"

Rectangle::Rectangle()
{
  setWidth(1);
  setLength(1);

  area = getArea();
  perimeter = getPerimeter();
}

Rectangle::Rectangle(double _length, double _width)
{
  setWidth(_width);
  setLength(_length);

  area = getArea();
  perimeter = getPerimeter();
}

Rectangle::Rectangle(double _length, double _width, const std::string &_color, bool _filled) : GeometricObject(_color, _filled)
{
  setWidth(_width);
  setLength(_length);

  area = getArea();
  perimeter = getPerimeter();
}

void Rectangle::setWidth(double _width)
{
  if(_width > 0)
  width = _width;
}

void Rectangle::setLength(double _length)
{
  if(_length > 0)
  length = _length;
}

double Rectangle::getWidth() const
{
  return width;
}

double Rectangle::getLength() const
{
  return length;
}

double Rectangle::getArea() const
{
  return length * width;
}

double Rectangle::getPerimeter() const
{
  return 2 * (length + width);
}

std::string Rectangle::toString() const
{
  return "Rectangle Object";
}
