#ifndef CIRCLE2D_H
#define CIRCLE2D_H

class Circle2D
{
private:
  double x, y, radius;
  static int numberOfCircles;

public:

  ~Circle2D(); //destructor

  Circle2D(double _x, double _y, double _radius); //user defined constructor

  double getX() const;

  double getY() const;

  double getRadius() const; //constant get function for radius

  static int getNumberOfCircles(); //static get function for numberOfCircles

  Circle2D(const Circle2D & circle);

  bool overlaps(const Circle2D & circle) const;

};
#endif
