#include<iostream>
using namespace std;


class Integer{
    int *a;
    int n;
    public:
    void input(){
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        a=new int(n);
    }
    void display(){
        cout<<"The value of a: "<<*a<<endl;
    }
    ~Integer(){
        delete a;
    }
};

int main(){
    Integer num;
    num.input();
    num.display();
    return 0;
}