#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class collegeClass
{
  friend ostream& operator<< (ostream&,  collegeClass&);
  friend istream& operator>> (istream &,  collegeClass&);
private:
  string classNam;
  int numStuds;
  int classCredit;

public:
  collegeClass();
  void set_Class(string, int, int);
  collegeClass operator+(const int);
  collegeClass operator-(const int);
};