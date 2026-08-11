#include<iostream>
using namespace std;

class Array{
    int n;
    int *arr;
    public:
    void input(){
        cout<<"Enter the value of n: "<<endl;
        cin>>n;
        cout<<"Enter the value of array"<<endl;
        arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    int maxi(){
        int k=0;
        for(int i=0;i<n;i++){
            if(k<arr[i]){
                k=arr[i];
            }
        }
        return k;
    }
    void display(){
        cout<<"The largest integer value: "<<maxi();
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
