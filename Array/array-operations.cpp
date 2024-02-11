#include <iostream>
using namespace std;
const int MAX = 10;

// create an array size then take input of 5 elements
// use switch case 1 to insert 2 delete 3 view 4 exit

int main () {
    int n;
    cout << "Enter the number of elements you want to insert in the array : " << endl;
    cin >> n;

    int arr[n];
    int code;
    int variable;

    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the code : " << endl;
    cin >> code;

    while (true) {
        switch (code) {
            case 1: 
                cout << "Enter a number into the array : " << endl;
                if (MAX > n) {
                    cin >> arr[]
                }
        }
    }

  




    return 0;
}