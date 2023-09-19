#include <iostream>
using namespace std;

// create an array size then take input of 5 elements
// use switch case 1 to insert 2 delete 3 view 4 exit

int main() {
    int size [10] = {2, 3, 4, 5, 6};
    int code, location, newValue;
    int n = sizeof(size)/sizeof(int);

    cout << "Enter code : " << endl;
    cin >> code;

    
    
    switch(code) {
        case 1: 
            cout << "Enter the location to insert the new value : " << endl;
            cin >> location;
            if (location >= 0 && location < n) {
                for (int i = n - 1; i >= location; i--) {
                size[i+1] = size[i];
            }
            }
            cout << "Enter the value to insert in the " << location << " location" << endl;
            cin >> newValue;

            size[location] = newValue;

            cout << "List of elements : " << endl;
            for (int i = 0; i < n; i++) {
                cout << size[i] << endl;
            }
            
        break;

        case 2: 
            cout << "Enter the location to delete : " << endl;
            cin >> location;

            if(location >= 0 && location <= n) {
                for (int i = n-1; i >= location; i--) {
                    size [i];
                }
            }


        break;
    }
    return 0;

}