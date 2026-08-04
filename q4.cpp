#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;

public:

   void input(){
    cout<<"Enter account number: ";
    cin>>accountNumber;
    cout<<"Enter account holder name:";
    cin>>accountHolderName;
    cout<<"Enter balance: ";
    cin>>balance;
   }

    void display(){
    cout<<"Account number: "<<accountNumber<<endl;
    cout<<"Account holder name: "<<accountHolderName<<endl;
    cout<<"Balance: "<<balance<<endl;
   }

   void deposit(int amount){
    if(amount<0){
        cout<<"Negative amount cannot be deposited."<<endl;
    }else{
        balance+=amount;
        cout<<"After deposit:"<<endl;
        display();
    }
   }

   void withdraw(int amount){
   if(amount>balance){
    cout<<"Insufficient balance."<<endl;
   }
   else if(amount<0){
    cout<<"Negative amount cannot be withdrawn."<<endl;
   }
   else{
    balance-=amount;
    cout<<"After withdrawal:"<<endl;
    display();
   }
   }
   
};

int main(){
    BankAccount account;
    account.input();
    account.display();
    account.deposit(1000);
    account.withdraw(500);
    return 0;
}