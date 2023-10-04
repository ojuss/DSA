#include <iostream>
using namespace std;

struct student {
  int roll;
  int marks;
};

void operator<<(ostream&print, student s) {
  print << "marks : " << s.marks << endl;
  print << "roll no : " << s.roll << endl;
}

int main () {
  struct student s1;
  s1.marks = 22;
  s1.roll = 34;
  cout << s1;
  return 0;
}