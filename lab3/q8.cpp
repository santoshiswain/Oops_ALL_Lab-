#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int n;
    int *marks;

public:
    
    

    
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> n;

        // Dynamically allocate marks array
        marks = new int[n];

        cout << "Enter marks for " << n << " subjects:\n";
        for (int i = 0; i < n; i++) {
            cin >> marks[i];
        }
    }

    // Calculate total marks
    int calculateTotal() {
        int total = 0;

        for (int i = 0; i < n; i++) {
            total += marks[i];
        }

        return total;
    }

    // Calculate average marks
    float calculateAverage() {
        return (float)calculateTotal() / n;
    }

    // Display complete result
    void displayResult() {
        cout << "\n----- Student Result -----\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << n << endl;

        cout << "Marks: ";
        for (int i = 0; i < n; i++) {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << calculateTotal() << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }

    // Destructor to release memory
    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student s;

    s.acceptDetails();
    s.displayResult();

    return 0;
}