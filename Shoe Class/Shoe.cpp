#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Shoe
{
private:
  double price, size;
  string color;

public:

  Shoe(double _price, double _size, string _color)
  {
    price = _price;
    size = _size;
    color = _color;
  }

  setPrice(double _price)
  {
    price = _price;
  }

  double getPrice()
  {
    return price;
  }

  setSize(double _size)
  {
    size = _size;
  }

  double getSize()
  {
    return size;
  }

  double getDiscount(double percentage)
  {
    double priceWithDiscount = percentage*price;
    return priceWithDiscount;
  }

};


int main()
{
  cout << fixed << setprecision(2);
  Shoe shoe1(100.00, 10.5, "white");
  cout << shoe1.getDiscount(0.75) << endl;
  Shoe shoe2(49.00, 6.5, "gray");
  cout << shoe2.getDiscount(0.50) << endl;
}
