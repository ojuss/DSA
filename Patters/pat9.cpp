#include <iostream>
using namespace std;

/*
A       B       C       D
E       F       G       H
I       J       K       L
M       N       O       P
*/


int main() {

    char ch = 'A';

    for (int i=1; i<=4; i++) {
        for (int j=1; j<=4; j++) {
            cout << ch << "\t";
            ch++;
        }
        cout << endl;
    }
    return 0;
}