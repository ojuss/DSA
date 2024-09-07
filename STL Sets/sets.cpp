#include <iostream>
#include <set>
using namespace std;

int main () {
    set<char> s1 = {'C', 'D', 'C', 'D', 'A'};
    // s1.begin() returns an iterator pointing to the first element in the set s1.

    // 
    for (auto itr = s1.begin(); itr!= s1.end(); itr++) {
      cout << *itr << endl;
    }
}