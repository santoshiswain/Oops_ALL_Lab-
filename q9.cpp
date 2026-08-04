#include <iostream>
using namespace std;

class StudentResult {
private:
    string studentName;
    int rollNumber;
    int marks[5];
    int totalMarks;
    float percentage;
    char grade;

public:

 void acceptDetails() {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    
void calculateResult() {
        totalMarks = 0;

        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }

        percentage = (totalMarks / 500.0) * 100;

        
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

void displayResult() {
        cout << "Student Name : " << studentName << endl;
        cout << "Roll Number  : " << rollNumber << endl;
        cout << "Total Marks  : " << totalMarks << "/500" << endl;
        cout << "Percentage   : " << percentage << "%" << endl;
        cout << "Grade        : " << grade << endl;
    }
};

int main() {
    StudentResult student;

    student.acceptDetails();
    student.calculateResult();
    student.displayResult();

    return 0;
}