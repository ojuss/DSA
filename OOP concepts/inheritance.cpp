#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    string company;
    int age;

public:
    Employee (string nm, string co, int ag) {
        name = nm;
        company = co;
        age = ag;
    }

    void intro() {
        cout << "Hello I'm " << name << "working at" << company << endl;
    }

};

class Developer:Employee {
private: 
    string favLang;
    
public:
    void intro() {
        cout << name << " is writing " << favLang << " code" << endl;
    }

    Developer (string nm, string co, int ag, string favL)
    :Employee (nm, co, ag) {
        favLang = favL;

    }
};

int main() {
    Developer d = Developer ("ojus", "intel", 19, "c++");

    d.intro();
}