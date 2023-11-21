#ifndef STARBUCKS_H
#define STARBUCKS_H
#include <iostream>

class Starbucks
{
private:
  static int numberOfStores; //total number of locations
  double individualSales; //sales of an individual store
  int numberOfWorkers; //number of workers at a given location
  static int totalWorkers; //keeps track of the total number of workers across all locations
  double workerSalary;
  double totalPaid;



public:

  Starbucks();

  ~Starbucks();

  Starbucks(double _individualSales, int _numberOfWorkers, double _workerSalary);

  double getStorePayout();

  double getTotalStorePayout();

  int getNumberOfStores();

};
#endif
