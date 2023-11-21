#include <iostream>

using namespace std;

double sumEven(const double* arr, int size)
{
  int j;
  int sum = 0;
  for(j = 1; j < size; j+=2)
  {
    sum += *(j+arr);
  }
  return sum;
}

int main()
{
  double array[6];
  cout << "Please enter six double numbers" << endl;
  for(int i = 0; i < 6; i++)
  {
    cin >> array[i];
  }

  cout << sumEven(array, 6);
}
