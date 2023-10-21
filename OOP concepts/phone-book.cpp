#include <iostream>
#include <string>

using namespace std;

class Contact {
private:
    string name;
    long int number;
    string email;

public:
    void getContact (int i) {
        cout << "Enter the name of the contact " << i << " : " << endl;
        cin >> name;
        cout << "Enter the contact number : " << endl;
        cin >> number;
        cout << "Enter email address : " << endl;
        cin>> email;
    }

    void showList () {
        cout << "Contact name : " << name << endl;
        cout << "Contact number : " << name << endl;
        cout << "Contact's email address : " << name << endl;
    }

    string getName () {
        return name;
    }
};

int main () {
    int size, op;
    string delContact;

    cout << "Enter operation\n1 - add\n2 - delete\n3 - modify : " << endl;
    cin >> op;

    switch(op) {
        case 1: 
            cout << "Enter the number of contacts : " << endl;
            cin>> size;

            Contact* contacts = new Contact[size];

            for(int i = 0; i < size; i++) {
                contacts[i].getContact(i);
            }
        break;

        case 2: 
            cout << "Enter the name of the contact you want to delete : " << endl;
            cin >> delContact;

            for(int i = 0; i < size; i++) {
                if (delContact == contacts[i].getName()) {
                    
                }
            }
        break;
    }

    

}