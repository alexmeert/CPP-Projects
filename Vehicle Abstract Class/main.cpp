#include <iostream>
#include <string>

using namespace std;

//vehicle will be the base class, then branching off will be land, sea, and air

class Vehicle
{
protected:
  double weight;
  int numSeats;

public:
  Vehicle()
  {
    weight = 0;
    numSeats = 2;
  }

  Vehicle(double _weight, int _numSeats)
  {
    if(_weight > 0)
    weight = _weight;

    if(_numSeats > 0)
    numSeats = _numSeats;
  }

  virtual string toString() const = 0;

};


class Land : public Vehicle
{
protected:
  int numWheels;

public:
  Land()
  {
    numWheels = 4;
  }

  Land(int _numWheels)
  {
    if (_numWheels > 0)
      numWheels = _numWheels;
    else
      numWheels = 4;
  }

  Land(double _weight, int _numSeats, int _numWheels) : Vehicle(_weight, _numSeats)
  {
    if (_numWheels > 0)
      numWheels = _numWheels;
    else
      numWheels = 4;
  }

  virtual bool isGas() const = 0; //pure virutal function since Land class is still abstract, we implement a pure virtual function for the child class to use

};


class Car : public Land
{
protected:
  bool transmission; // 0 is automatic, 1 is manual
  string engineType;

public:
  Car()
  {
    transmission = 0;
    engineType = "Gas";
  }

  Car(bool _transmission, const string &_engineType)
  {
    transmission = _transmission;
    engineType = _engineType;
  }

  Car(double _weight, int _numSeats, int _numWheels, bool _transmission, const string &_engineType) : Land(_weight, _numSeats, _numWheels)
  {
    transmission = _transmission;
    engineType = _engineType;
  }

  bool isGas() const //overwriting the isGas pure virtual function
  {
    if(engineType == "Gas")
      return true;
    else
      return false;
  }

  string toString() const
  {
    return "Car";
  }

};


class Sedan : public Car
{
private:
  string make;
  string model;

public:
  Sedan()
  {
    make = "Toyota";
    model = "Camry";
  }

  Sedan(double _weight, int _numSeats, int _numWheels, bool _transmission, const string &_engineType, const string &_make, const string &_model) : Car(_weight, _numSeats, _numWheels, _transmission, _engineType)
  {
    make = _make;
    model = _model;
  }

  string toString() const //overwriting the toString function
  {
    return "Sedan";
  }

  void printInfo() const
  {
    cout << "Here's Your Sedan's Info:" << endl;
    cout << "-------------------------" << endl;
    cout << "|" << "Make: " << make << "\t\t|" << endl;
    cout << "|" << "Model: " << model << "\t\t|" <<endl;
    cout << "|" << "Transmission: " << transmission << "\t|" << endl;
    cout << "|" << "Engine Type: " << engineType << "\t|" <<endl;
    cout << "|" << "Weight: " << weight << " tons" << "\t|" << endl;
    cout << "|" << "Number of Seats: " << numSeats << "\t|" << endl;
    cout << "|" << "Number of Wheels: " << numWheels << "\t|" << endl;
    cout << "-------------------------" << endl;
  }


};

void display(Car & car)
{
  cout << car.toString() << endl;
}




int main()
{

  Sedan sedan1(2.1, 5, 4, 1, "Gas", "Toyota", "Camry");
  Sedan sedan2(2.3, 4, 4, 1, "Gas", "Toyota", "Carolla");

  sedan1.printInfo();
  sedan2.printInfo();
}
