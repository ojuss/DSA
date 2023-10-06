#include <iostream>
using namespace std;

/*
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/

int main() {
    int count = 1;
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=4; j++) {
            cout << count << "\t";
            count++;
        }
        cout << endl;
    }
    return 0;
}