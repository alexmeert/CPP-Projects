#include <iostream>
#include <string> //since we need to use words to describe the cars

using namespace std;

class Car
{
public:
  string color, make, model;
  int year;
  double MPG, weight;

    Car()
    {
      color = "Red";
      make = "Honda";
      model = "Civic";
      year - 2023;
      MPG = 30.5;
      weight = 3500;
    }

    Car(string _color, string _make, string _model, int _year, double _MPG, double _weight)
    {
      color = _color;
      make = _make;
      model = _model;
      year = _year;
      MPG = _MPG;
      weight = _weight;
    }

    Car(string _color, string _make)
    {
      color = _color;
      make = _make;
      model = "Civic";
      year - 2023;
      MPG = 30.5;
      weight = 3500;
    }

    void display()
    {
      cout << color << endl;
      cout << make << endl;
      cout << model << endl;
      cout << year << endl;
      cout << MPG << endl;
      cout << weight << endl;
    }


    double range(double gallons)
    {
      return MPG*gallons;
    }

};



int main()
{

  Car car1;
    cout << "Car 1's range is " << car1.range(10) << " miles" << endl;
    car1.display();

  Car car2("Blue", "Toyota", "Camry", 2010, 27.8, 3800); //Inputting car information for "car2"
    cout << endl << "Car 2's range is " << car2.range(10) << " miles" << endl;
    car2.display();

}
