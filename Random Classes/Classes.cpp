#include <iostream>

using namespace std;


/*
    - A class defines the properties and behanviors for objects
    - An object represents an entity in the real world that can be distinctly identified
    - An object has a unique identity, state, and behavior
    - The state of an object (AKA properties or attributes) is represented by data fields with their current values
    - A circle object has a data field, RADIUS, which is the property that characterizes a circle
    - The BEHAVIOR of an object is defined by FUNCTIONS
    - CONSTRUCTORS create an object
    - Constructors look like functions but are NOT
    - ALL classes must have constructors
    - Constructors with no argument are called "NO ARGUMENT CONSTRUCTORS"
    - Constructors with an argument are called "USER DEFINED CONSTRUCTORS"
    - There is a default value that C++ will give if  there are no constructors
    - If you give at least one constructor, C++ will not provide you w/ a default value
*/


class Circle
{
  public: //if your forgor this you will die >:(
    double radius;

    Circle() //this is a constructor, there is no argument within the parantheses. Called a "no argument constructor"
    {
      radius = 1; //if somebody wants to create a circle object and doesn't provide the radius, it will be set to a radius of 1
    }

    Circle(double _radius) //this is also a constructor, but it has an argument which the user has defined to be the radius of the circle object
    {
      radius = _radius; //when the user creates a circle object with an argument, the radius will be set to that value
    }

    double getArea()
    {
      return radius*radius*3.1415;
    }

    double getCircum()
    {
      return radius*2*3.1415;
    }

}; //use a semicolon after the class implementation!


    double getArea2(Circle &cir)
    {
      return cir.radius*cir.radius*3.1415; //imagine that you do not have a getArea function inside of the class. You can make a function to calculate the area using the existing radius
    }


int main()
{

  Circle cir1; //the radius of "cir1" will be 1 since it's a NO ARGUMENT CONSTRUCTOR

  cout << "Circle 1" << endl;
  cout << "Radius: " << cir1.radius << endl << endl;

  Circle cir2(4.8); //the radius of "cir2" will be 4.8 since it's a USER DEFINED CONSTRUCTOR

  cout << "Circle 2" << endl;
  cout << "Radius: " << cir2.radius << endl;
  cout << "Area: " << cir2.getArea() << endl; //calling the getArea function
  cout << "Circumference: " << cir2.getCircum() << endl; //calling the getCircum function

  cout << "Area: " << getArea2(cir2) << endl; //calling getArea2, our alternative function given the scenario in the comment on line 53


}
