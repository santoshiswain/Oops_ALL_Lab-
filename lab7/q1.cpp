#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;

public:
    Employee(string n, double s) {
        name = n;
        basicSalary = s;
    }
};

class Developer : public Employee {
private:
   int experience;

public:
    Developer(string n, double s, int exp)
        : Employee(n, s) {
        experience = exp;
    }
     int getExperience() {
        return experience;
    }

    double experienceBonus() {
        return 0.05 * basicSalary * experience;
    }
};

class SeniorDeveloper : public Developer {
private:
    double projectBonus;

public:
    SeniorDeveloper(string n, double s, int exp, double bonus)
        : Developer(n, s, exp) {
        projectBonus = bonus;
    }
   

    void display() {
        double finalSalary = basicSalary + experienceBonus() + projectBonus;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main() {
    SeniorDeveloper s("Rahul", 50000, 4, 10000);
    s.display();

    return 0;
}