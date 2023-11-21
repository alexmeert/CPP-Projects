#include <iostream>
#include <string>

using namespace std;


template <typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2)
{
    T max1 = list1[0];
    for (int i = 1; i < size1; i++)
    {
        if (list1[i] > max1)
        {
            max1 = list1[i]; //sets the new max to the value in the i index if its greater than list1[0]
        }
    }

    T min2 = list2[0];
    for (int i = 1; i < size2; i++)
    {
        if (list2[i] < min2)
        {
            min2 = list2[i];
        }
    }
    return min2 > max1; //returns true if the minimum of array2 is greater than the max of array1 indicating that all of list 2 is greater than list
}

int main()
{

    cout << boolalpha; //makes all boolean values output their text equivalent (for easier interpretation with the program)

    //integers
    cout << "Integers:" << endl;
    int arr1[] = {1, 2, 3};
    int arr2[] = {8, 9, 10};
    cout << isGreater(arr1, arr2, 3, 3) << endl << endl;

    //doubles
    cout << "Doubles:" << endl;
    double arr3[] = {1.1, 2.2, 3.3};
    double arr4[] = {8.8, 9.9, 10.10};
    cout <<  isGreater(arr3, arr4, 3, 3) << endl << endl;

    //strings
    cout << "Strings:" << endl;
    string arr5[] = {"apple", "grape", "banana"};
    string arr6[] = {"cheese", "milk", "coffee"};
    cout << isGreater(arr5, arr6, 3, 3) << endl;
}
