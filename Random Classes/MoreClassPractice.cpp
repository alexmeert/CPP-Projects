#include <iostream>
#include <string>

using namespace std;

class Student
{
public:

  string firstName;
  string lastName;
  double GPA;
  int id, credits, age;

  Student() //no argument constructor
  {
    GPA = 0;
    credits = 0;
    firstName = "John";
    lastName = "Doe";
    id = 0;
    age = 18;
  }

  Student(string _firstName, string _lastName, double _GPA, int _id, int _credits, int _age)
  {
    GPA = _GPA;
    credits = _credits;
    firstName = _firstName;
    lastName = _lastName;
    id = _id;
    age = _age;
  }

  void addCourse(int credit, char grade)
  {
    int gradeNum;
    if(grade == 'A')
      gradeNum = 4;
    else if(grade == 'B')
      gradeNum = 3;
    else if(grade == 'C')
      gradeNum = 2;
    else if(grade == 'D')
      gradeNum = 1;
    else if(grade == 'F')
      gradeNum = 0;
    else
      cout << "Invalid Grade." << endl;

    GPA = ((GPA * credits) + (gradeNum * credit)) / (credits + credit);
    credits = credits + credit;
  }

  void display()
  {
    cout << "ID: " << id << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "GPA: " << GPA << endl;
    cout << "Credits: " << credits << endl;
    cout << "Age: " << age << endl;
  }
};


int main()
{
  Student stu1;
  stu1.display();

  Student stu2("Alex", "Meert", 3.69, 3051, 69, 19);
  stu2.display();
}
