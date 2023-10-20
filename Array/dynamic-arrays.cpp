#include <iostream>
using namespace std;

int main () {
    int num;

    cout << "Enter size of the array : " << endl;
    cin >> num;

    int* arr = new int[num];

    for (int i= 0; i<num; i++) {
        cout << "Enter element " << i+1 << ": " << endl;
        cin>>arr[i];
    }

    for (int i=0; i < num; i++) {
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }


    return 0;
}