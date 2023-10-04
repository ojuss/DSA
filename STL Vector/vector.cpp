#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> numbers;

    numbers.push_back(0);

    for (int i=1; i<11; i++) {
        numbers.push_back(i);
    }

    
    for (auto i = numbers.begin(); i != numbers.end(); i++) {
        cout << *i << endl;
        cout << &i << endl;
        cout << &(*i) <<  endl;
    }
    
}