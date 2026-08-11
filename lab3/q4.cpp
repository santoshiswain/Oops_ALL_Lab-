#include<iostream>
using namespace std;

class Array{
    int n;
    float *arr;
    public:
    void input(){
        cout<<"Enter the value of n: "<<endl;
        cin>>n;
        cout<<"Enter the value of array"<<endl;
        arr=new float[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    int total(){
        float k=0;
        for(int i=0;i<n;i++){
            k+=arr[i];
        }
        return k;
    }
    int average(){
     return total()/n;
    }
    void display(){
        cout<<"The total value: "<<total()<<endl;
        cout<<"The average value :"<<average()<<endl;
    }
    ~Array(){
        delete[] arr;
    }
};

int main(){
    Array a;
    a.input();
    a.display();
    return 0;
}