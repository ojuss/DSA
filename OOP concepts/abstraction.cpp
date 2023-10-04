#include  <iostream>
using namespace std;


// Abstracted Class
class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee {
public:
    string name;
    string company;
    int age;
    float salary;

    Employee (string Name, string Company, int Age, float Salary) { // constructor
        name = Name;
        company = Company;
        age = Age;
        salary = Salary;
    }

     void askForPromotion() {
        if  (age > 30) { 
            cout << name << " just got promoted!" << endl;
        }

        else {
            cout << "Sorry no promotion for you!" << endl;
        }
     }
};

int main() {
    Employee emp = Employee ("John", "De Shaw", 31, 9643.32);
    emp.askForPromotion();

}