#include<iostream>
using namespace std;

class Employees{
    int id;
    int salary;
    string name;
    int *Employees;
    int n;
    public:

    void accept(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Salary: ";
        cin>>salary;
        cout<<"id : ";
        cin>>id;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
    }

    void input(){
        cout<<"Enter the size of employees: "<<endl;
        cin>>n;

        Employees=new int[n];
        for(int i=0;i<n;i++){
          cout<<"For"<<i+1<<"Emploees"<<endl;
          cout<<"Enter input"<<endl;
          input();
          cout<<"result"<<endl;
          display();
        }

    }
    ~Employees(){
        delete[] Employees;
    }


};

int main(){
    Employees e;
    e.input();
    return 0;
}