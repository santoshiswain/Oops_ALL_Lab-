#include<iostream>
using namespace std;

class Student{
    int rn;
    string name;
    int marks;
    public:
    void input(){
        cout<<"Enter the rollnumber: "<<endl;
        cin>>rn;
        cout<<"Enter the name: "<<endl;
        cin>>name;
        cout<<"Enter the marks: "<<endl;
        cin>>marks;
    }
    void display(){
        cout<<"The name of the student"<<name<<endl;
        cout<<"The rollnumber of the student"<<rn<<endl;
        cout<<"The marks of the student"<<marks<<endl;
    }
};

int main(){
  Student *s=new Student;
  s->input();
  s->display();
  return 0;
}