#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    float salary;

public: 
    void setName (string n) { // setter
        name = n;
    }

    string getName () { // getter
        return name;
    }
};

int main() {
    
    Employee emp;


    emp.setName("Ojus");

    cout << "The name is : " << emp.getName() << endl;
}