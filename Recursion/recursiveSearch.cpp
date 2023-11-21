#include <iostream>

bool binarySearch(int arr[], int low, int high, int key)
{
  if(low > high)
    return false;
  else
  {
    int mid = (low+high)/2;

    if(key == arr[mid])
      return true;
    else if(key > arr[mid])
      return binarySearch(arr, key, mid+1, high);
    else
      return binarySearch(arr, key, low, mid-1);
  }
}

using namespace std;

int main()
{
  int list[] = {2, 5, 8, 10, 16, 19, 28, 34, 45};
  cout << binarySearch(list, 0, 8, 34);
}
