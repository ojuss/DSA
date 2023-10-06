#include <iostream>
using namespace std;

/*
4       3       2       1
4       3       2       1
4       3       2       1
4       3       2       1
*/

int main() {
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=4; j++) {
            cout << 4-j+1 << "\t";
        }
        cout << endl;
    }
    return 0;
}