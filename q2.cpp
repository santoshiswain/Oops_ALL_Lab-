#include<iostream>
using namespace std;

class Rectangle{
    int length,breath;
    public:
    void input(){
        cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the breath of the rectangle: ";
        cin>>breath;
    }
    int area(){
        int area=length*breath;
        return area;
    }
    int perimeter(){
        int perimeter=2*(length+breath);
        return perimeter;
    }
    void display(){
        cout<<"The area of the rectangle is: "<<area()<<endl;
        cout<<"The perimeter of the rectangle is: "<<perimeter()<<endl;
    }

};

int main(){
    Rectangle r;
    r.input();
    r.display();
    return 0;
}