#include<iostream>
using namespace std;

class Array{
    int *arr;
    int n;
    public:
    void input(){
      cout<<"Enter the size of array"<<endl;
      cin>>n;
      arr=new int[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
    }
    void display(){
        cout<<"The element of array: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
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

