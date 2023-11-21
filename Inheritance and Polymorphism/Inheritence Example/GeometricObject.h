#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>

class GeometricObject
{
protected:
  double area, perimeter;

private:
  std::string color;
  bool filled;

public:
  GeometricObject();
  GeometricObject(const std::string & _color, bool _filled);

  void setFilled(bool _filled);
  void setColor(const std::string & _color);

  std::string getColor() const;
  bool getFilled() const;

  std::string toString() const;
};

#endif
