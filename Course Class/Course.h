#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course
{
private:
  std::string courseName;
  int capacity, numberOfStudents;
  std::string * studentNames;

public:
  Course(const std::string & _courseName, int _capacity);

  std::string getCourseName() const;
  int getCapacity() const;
  int getNumOfStudents() const;

  Course::Course(const Course & course);

  void addStudent(const std::string & name);
};

#endif
