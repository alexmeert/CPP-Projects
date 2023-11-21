#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
  color = "blue";
  filled = true;
}

GeometricObject::GeometricObject(const std::string & _color, bool _filled)
{
  color = _color;
  filled = _filled;
}

void GeometricObject::setFilled(bool _filled)
{
  filled = _filled;
}
void GeometricObject::setColor(const std::string & _color)
{
  color = _color;
}

std::string GeometricObject::getColor() const
{
  return color;
}
bool GeometricObject::getFilled() const
{
  return filled;
}

std::string GeometricObject::toString() const
{
  return "Geometric Object";
}
