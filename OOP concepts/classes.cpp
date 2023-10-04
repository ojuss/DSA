#include <iostream>
using std::string;
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    float Salary;

    void intro() {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
        cout << "Salary : " << Salary << endl;
    }

    Employee (string name, string company, int age, float salary) {
        Name = name;
        Company = company;
        Age = age;
        Salary = salary;
    }

};
int main() {
    Employee employee1 = Employee ("Harsh", "Amazon", 23, 3292.78);

    employee1.intro();
}