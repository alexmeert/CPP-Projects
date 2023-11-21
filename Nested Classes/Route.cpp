#include "Route.h"
#include <iostream>


Route::Route(double _time, double _length)
{
  setTime(_time);
  setLength(_length);
}

double Route::getTime() const
{
  return time;
}
double Route::getLength() const
{
  return length;
}

void Route::setTime(double _time)
{
  if (_time <= 0)
    return;
  else
    time = _time;
}
void Route::setLength(double _length)
{
  if (_length <= 0)
    return;
  else
    length = _length;
}
