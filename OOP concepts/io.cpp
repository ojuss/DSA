#include <iostream>
using namespace std;

class student {
private: 
    int rollNo;
    float marks;
    char name[50];

public: 
    void input () {
        cout << "Enter the name of the student : " << endl;
        cin >> name;
        cout << "Enter roll number : " << endl;
        cin >> rollNo;
        cout << "Enter marks : " << endl;
        cin >> marks;
    }
    void output () {
        cout << "Details of the student : " << endl;
        cout << name;
        cout << rollNo;
        cout << marks;
    }
};


int main() {
    student bruh;
    bruh.input();
    bruh.output();

    return 0;

}