#include<iostream>
using namespace std;


class Product{
    int id;
    string name;
    float quantity;
    int price;
    public:
    void input(){
        cout<<"Enter the id \n";
        cin>>id;
        cout<<"Enter the name\n";
        cin>>name;
        cout<<" The quantity available\n";
        cin>>quantity;
        cout<<"Enter the price\n";
        cin>>price;
    }
    void display(){
        cout<<"The product id"<<id<<endl;
        cout<<"The product name"<<name<<endl;
        cout<<"The quantity available"<<quantity<<endl;
        cout<<"The price per unit"<<price<<endl;
    }
    int afterselling(float q){
        quantity-=q;
        cout<<"After selling"<<endl;
        display();
    }
    void inventory(){
        cout<<"The inventory value"<<quantity*price;
    }
    
};

int main(){
    Product p;
    p.input();
    p.display();
    p.inventory();
    return 0;
}