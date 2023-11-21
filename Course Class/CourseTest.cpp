#include "Course.h"
#include "Course.cpp"

using namespace std;

int main()
{

  Course oop = Course("Object Oriented Programming", 42);

  Course * java = new Course("Java", 30);

  cout << oop.getCourseName() << endl;
  cout << java->getCourseName() << endl;

  oop.addStudent("Student-1");
  oop.addStudent("Student-2");
  java->addStudent("Student-3");
}
