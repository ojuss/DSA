#include <iostream>
using namespace std;

/*
A       A       A       A
B       B       B       B
C       C       C       C
D       D       D       D
*/

int main() {
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=4; j++) {
            char ch = 'A' + i - 1;
            cout << ch << "\t";
        }
        cout << endl;
    }
}