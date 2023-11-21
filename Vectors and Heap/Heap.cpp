#include <iostream>
#include <string>


using namespace std;


class Student
{
public:
  string firstName, lastName;
  int age;
  double GPA;


  Student()
  {
    firstName = " ";
    lastName = " ";
    age = 18;
    GPA = 2;
  }
}



int main()
{
  Student stu1; //ON THE STACK

  Student * stu2 = new Student(); //created a new object on the heap

  delete stu2;



  //int * arr = new int[8]; //creating a space of 64 bytes on the heap (the 'new' keyword indicates that the location is the heap)
  //delete [] arr; //not deleting the data, just deallocating the space you created earlier
}
