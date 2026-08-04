#include<iostream>
using namespace std;

class Calculater{
    int n1;
    int n2;
    public:
    void input(){
        cout<<"Enter first number: ";
        cin>>n1;
        cout<<"Enter second number: ";
        cin>>n2;
    }
    int add(){
        return n1+n2;
    }
    int sub(){
        return n2-n1;
    }
    int mul(){
        return n1*n2;
    }
    int div(){
        if(n2!=0){
            return n1/n2;
        }
        else{
            cout<<"Division by zero is not allowed."<<endl;
            return 0;
        }
    }
    void display(){
        cout<<"the addition of two numbers is:"<<add()<<endl;
        cout<<"the subtraction of two numbers is:"<<sub()<<endl;
         cout<<"the multiplication of two numbers is:"<<mul()<<endl;
          cout<<"the division of two numbers is:"<<div()<<endl;
    }
};

int main(){
    Calculater c;
    c.input();
    c.display();
    return 0;
}