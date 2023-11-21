#include <iostream>
#include "Starbucks.h"

Starbucks::Starbucks()
{
  numberOfStores = 0;
  individualSales = 0;
  numberOfWorkers = 0;
  workerSalary = 0;
}

Starbucks::~Starbucks()
{
  numberOfStores--;
  totalWorkers -= numberOfWorkers;
}

Starbucks::Starbucks(double _individualSales, int _numberOfWorkers, double _workerSalary)
{
  individualSales = _individualSales;
  numberOfWorkers = _numberOfWorkers;
  workerSalary = _workerSalary;
  numberOfStores++;
  totalWorkers += _numberOfWorkers;

}

double Starbucks::getStorePayout()
{
  return numberOfWorkers*workerSalary;
}

double Starbucks::getTotalStorePayout()
{
  return totalPaid = totalWorkers*workerSalary;
}
