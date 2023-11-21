class Circle
{
private:
  double radius; //radius cannot be changed without use of a constructor

public:

  Circle();

  Circle(double _radius);

  double getRadius();

  void setRadius(double _radius);

  double getArea();

};
