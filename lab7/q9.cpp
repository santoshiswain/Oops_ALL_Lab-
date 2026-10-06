#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee : public Person {
protected:
    int employeeID;
    double salary;

public:
    Employee(string n, int a, int id, double s)
        : Person(n, a) {
        employeeID = id;
        salary = s;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id, double s, string d)
        : Employee(n, a, id, s) {
        department = d;
        cout << "Manager constructor" << endl;
    }

    void display() {
        cout << "\nInformation:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Santoshi", 20, 1001, 50000, "IT");
    m.display();

    return 0;
}