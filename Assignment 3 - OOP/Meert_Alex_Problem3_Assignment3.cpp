#include <iostream>
#include <string>

using namespace std;

class Attendance
{
private:

  string attendance;

  bool isAbsent()
  {
    int counter = 0;
    int i;

    for(i = 0; i < 6; i++)
    {
      if (attendance[i] == 'A')
      {
        counter++;
      }
    }
    if(counter >= 2)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool isLate()
  {
    int i;

    for(i = 1; i < 6; i++)
    {
      if(attendance[i] == 'L' && attendance[i] == attendance[i+1] && attendance[i] == attendance[i-1])
      {
        return true;
      }
    }
      return false;
  }

public:

  Attendance(const string &_attendance)
  {
    attendance = _attendance;
  }

  bool checkAttendance()
  {
    if (isLate() == false && isAbsent() == false)
    {
      return true;
    }
    else if (isLate() == true && isAbsent() == true)
    {
      return false;
    }
  }
}; // end of "Attendance" class


int main()
{
  Attendance attendance1("PPALLP");
  Attendance attendance2("PPALLL");

  (attendance1.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
  cout << endl;
  (attendance2.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
  cout << endl;
}
