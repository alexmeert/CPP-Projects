#include <iostream>
#include <string>

using namespace std;

class Stock
{
private:

  string symbol;
  string name;
  double previousClosingPrice;
  double currentPrice;

public:

  Stock(string _symbol, string _name, double _previousClosingPrice, double _currentPrice)
  {
    symbol = _symbol;
    name = _name;
    previousClosingPrice = _previousClosingPrice;
    currentPrice = _currentPrice;
  }

  void setCurrentPrice(double _currentPrice)
  {
    currentPrice = _currentPrice;
  }

  void setPreviousClosingPrice(double _previousClosingPrice)
  {
    previousClosingPrice = _previousClosingPrice;
  }

  double getPreviousClosingPrice() const
  {
    return previousClosingPrice;
  }

  double getCurrentPrice() const
  {
    return currentPrice;
  }

  double getPercentageChange()
  {
    return ((currentPrice - previousClosingPrice)/previousClosingPrice)*100;
  }


};

int main()
{
  Stock stock("MSFT", "Microsoft Coorporation", 27.5, 27.6);

  cout << "Previous Closing Price: " << stock.getPreviousClosingPrice() << endl;
  cout << "Curent Price: " << stock.getCurrentPrice() << endl;
  cout << "Percentage Change: " << stock.getPercentageChange() << endl;
}
