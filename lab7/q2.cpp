#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    int marks1, marks2, marks3;

public:
    Student(string n, int r, int m1, int m2, int m3) {
        name = n;
        rollNo = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    virtual void calculateResult() {
        cout << "Total Marks: " << marks1 + marks2 + marks3 << endl;
    }
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3) {}

    void calculateResult() override {
        int total = marks1 + marks2 + marks3;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3) {}

    void calculateResult() override {
        int total = marks1 + marks2 + marks3 + 5;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks with Bonus: " << total << endl;
    }
};

int main() {
    RegularStudent r("Amit", 101, 80, 75, 85);
    ScholarshipStudent s("Riya", 102, 80, 75, 85);

    cout << "Regular Student:" << endl;
    r.calculateResult();

    cout << "\nScholarship Student:" << endl;
    s.calculateResult();

    return 0;
}