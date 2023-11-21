#include <iostream>

using namespace std;

class Rectangle2D
{
private:

  double x;
  double y;
  double width;
  double height;

public:

  Rectangle2D()
  {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
  }

  Rectangle2D(double _x, double _y, double _width, double _height)
  {
    x = _x;
    y = _y;
    width = _width;
    height = _height;
  }

  void setCenter(double _x, double _y)
  {
    x = _x;
    y = _y;
  }

  void setDimensions(double _width, double _height)
  {
    width = _width;
    height = _height;
  }

  double getCenterX() const
  {
    return x;
  }

  double getCenterY() const
  {
    return y;
  }

  double getWidth() const
  {
    return width;
  }

  double getHeight() const
  {
    return height;
  }

  bool contains(double a, double b) const //checks if a point is contained within a rectangle
  {
  	if(a > (x - width/2) && a < (x + width/2))
  	{
  		if(b > (y-height/2)&& b < (y+height/2))
  		{
  			return true;
		}
	}
	return false;
  }

  bool contains(const Rectangle2D &r) const //checks if a rectangle is within another rectangle
  {
	if(contains(r.getCenterX(), r.getCenterY()) == true)
	{
		if((x-width/2) < (r.getCenterX() - r.getWidth()/2) && ((x+width/2) < (r.getCenterX() + r.getWidth()/2)))
		{
			if((y-height/2) < (r.getCenterY() - r.getHeight()/2) && ((y+height/2) < (r.getCenterY() + r.getHeight()/2)))
			{
				return true;
			}
		}
	}
	return false;
  }

  bool overlaps(const Rectangle2D &r) const
  {
  	int rx = r.getCenterX();
	int rWidth = r.getWidth();
	int ry = r.getCenterY();
	int rHeight = r.getHeight();
	// Checks if the corners and midpoints are in the other rectangle
	if (contains(rx - rWidth/2, ry + rHeight/2) || contains(rx - rWidth/2, ry) || contains(rx - rWidth/2, ry - rHeight/2))
	{
  	// Top Left, Middle Left, Bottom Left
  	return true;
	}
	else if (contains(rx, ry + rHeight/2) || contains(rx, ry - rHeight/2))
	{
  // Top Middle, Bottom Middle
  	return true;
	}
	else if (contains(rx + rWidth/2, ry + rHeight/2) || contains(rx + rWidth/2, ry) || contains(rx + rWidth/2, ry - rHeight/2))
	{
  	// Top Right, Middle Right, Bottom Right
  	return true;
  	}
	else
	{
  	// They just don't overlap...
 	 return false;
	}
  }
}; //end of rectangle class



int main()
{
  Rectangle2D r1(2, 2, 5.5, 4.9);
  Rectangle2D r2(4, 5, 10.5, 3.2);
  Rectangle2D r3(3, 5, 2.3, 5.4);

  cout << r1.contains(3, 3) << endl;
  cout << r1.contains(r2) << endl;
  cout << r1.overlaps(r3) << endl;
}
