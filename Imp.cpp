#include "Header.h"
collegeClass::collegeClass()
{
  classNam = "";
  numStuds = 0;
  classCredit = 0;
}

void collegeClass::set_Class(string name, int studs, int credit)
{
  classNam = name;
  numStuds = studs;
  classCredit = credit;

}

ostream& operator<<(ostream& output, collegeClass& C)
{
  output << "class Name: " << C.classNam << '\n'
         << "Number of students in class: " << C.numStuds << '\n'
         << "Class Credit: " << C.classCredit << '\n';
  return output;
}

istream& operator>>(istream& input, collegeClass& temp)
{  
  input  >> temp.classNam >> temp.numStuds >> temp.classCredit;
  return input;
}
collegeClass collegeClass::operator+(const int X)
{
  collegeClass test = *this;
  test.numStuds += X;
  return test;
}
collegeClass collegeClass::operator-(const int X)
{
  collegeClass test = *this;
  if ((test.numStuds - X) >= 0)
    test.numStuds -= X;
  else {
    cout << "CANNOT have less then 0 students. \n ";
  }
  return test;
}



