#include "Circle2D.h"
#include <cmath>

int Circle2D::numberOfCircles = 0;

Circle2D::~Circle2D() //destructor
{
  numberOfCircles--;
}

Circle2D::Circle2D(double _x, double _y, double _radius) //user defined constructor
{
  x = _x;
  y = _y;
  radius = _radius;

  numberOfCircles++;
}

double Circle2D::getX() const
{
  return x;
}

double Circle2D::getY() const
{
  return y;
}

double Circle2D::getRadius() const //constant get function for radius
{
  return radius;
}

int Circle2D::getNumberOfCircles() //static get function for numberOfCircles
{
  return numberOfCircles;
}

Circle2D::Circle2D(const Circle2D & circle)
{
  x = circle.x;
  y = circle.y;
  radius = circle.radius;
  numberOfCircles++;
}

bool Circle2D::overlaps(const Circle2D & circle) const
{
  double distance = sqrt(pow(circle.getX()-getX(),2)+pow(circle.getY()-getY(),2));
  double totalRadius = circle.getRadius() + getRadius();
  if(distance > totalRadius)
  {
    return false;
  }
  else
  {
    return true;
  }
}
