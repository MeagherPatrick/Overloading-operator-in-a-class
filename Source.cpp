#include "Header.h"
int main()
{
  collegeClass csc;
  int ans = 0;
  int numStuds = 0;

  cout << "Enter name of class, number of students and number of credit "
          "hours:\n";
  cin >> csc;
  while (ans != -1) {
    cout << "Enter 1 to register students " << '\n'
         << "Enter 2 to drop students     " << '\n'
         << "Enter 3 to print class information " << '\n'
         << "Enter -1 to end " << '\n';
    cin >> ans;

    switch (ans) {
      case 1:
        cout << "enter number of students to add: \n";
        cin >> numStuds;
        csc = csc + numStuds;
        break;
      case 2:
        cout << "enter the number of students to drop \n";
        cin >> numStuds;
        csc = csc - numStuds;
        break;
      case 3:
        cout << csc << '\n';
        break;
      default:
        break;
    }
  }
}