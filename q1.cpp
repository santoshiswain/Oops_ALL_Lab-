#include<iostream>
using namespace std;

class Student{
    int rollno;
    int marks;
    string name;
 public:
  void input(){
      cout<<"Enter roll number: ";
      cin>>rollno;
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter marks: ";
      cin>>marks;
  }
void display(){
    cout<<"The roll number is: "<<rollno<<endl;
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The marks of the student is: "<<marks<<endl;
}  
       
};

int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}