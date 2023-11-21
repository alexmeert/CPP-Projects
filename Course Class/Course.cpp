#include "Course.h"

Course::Course(const std::string & _courseName, int _capacity)
{
  courseName = _courseName;
  capacity = _capacity;
  numberOfStudents = 0;
  studentNames = new std::string[capacity];
}

std::string Course::getCourseName() const
{
  return courseName;
}

int Course::getCapacity() const
{
  return capacity;
}

int Course::getNumOfStudents() const
{
  return numberOfStudents;
}

void Course::addStudent(const std::string & name)
{
  studentNames[numberOfStudents] = name;
  numberOfStudents++;
}

Course::Course(const Course & course)
{
  capacity = course.capacity;
  numberOfStudents = course.numberOfStudents;
  courseName = course.courseName;
  students = new std::string[capacity];

  for(int i =0; i < numberOfStudents; i++)
  {
    students[i] = course.students[i];
  }
}
