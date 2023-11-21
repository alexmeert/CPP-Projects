#ifndef ROUTE_H
#define ROUTE_H

class Route
{
private:
  double time, length;

public:

  Route(double _time, double _length);

  double getTime() const;
  double getLength() const;

  void setTime(double _time);
  void setLength(double _length);
};


#endif
