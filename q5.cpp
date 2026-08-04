#include<iostream>
using namespace std;

class Employees{
    int id;
    double salary;
    string name;
    public:
    void input(){
        cout<<"Enter employees id: ";
        cin>>id;
        cout<<"Enetr Employees name";
        cin>>name;
        cout<<"Enter Employees salary: ";
        cin>>salary;
    }
    int HRA(){
        return salary*0.2;
    }
    int DA(){
        return salary*0.1;
    } 
    int GS(){
        return salary+HRA()+DA();
    }
    void display(){
    cout<<"The salary of Employees "<<salary<<endl;
    cout<<"The HRA of Employees "<<HRA()<<endl;
    cout<<"The DA of Employees "<<DA()<<endl;
    cout<<"The GS of Employees"<<GS()<<endl;
    }
};

int main(){
    Employees e;
    e.input();
    e.display();
    return 0;
}

