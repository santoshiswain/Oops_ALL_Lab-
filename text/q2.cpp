#include<iostream>
using namespace std;

int main() {
    int balance;
    int i;
    cout << "Enter the initial balance: ";
    cin>>balance;
    int *ptr = &balance;
    cout << "Initial balance: " << *ptr << endl;
    cout<<"Enter the additional balance"<<endl;
    cin>>i;
    *ptr=*ptr+i;
    cout << "Updated balance: " << *ptr << endl;
    cout<<"Enter the balance to deduct"<<endl;
    cin>>i;
    if(i>*ptr){
        cout<<"Insufficient balance"<<endl;
    }else{
    *ptr=*ptr-i;
    cout << "Final balance: " << *ptr << endl;
    }
    return 0;
}