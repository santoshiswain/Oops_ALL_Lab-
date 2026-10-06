#include<iostream>
using namespace std;

void max(int *arr, int size){
    int maximum=*arr;
    for(int i=1; i<size; i++){
        if(*(arr+i)>maximum){
            maximum=*(arr+i);
        }
    }
    cout<<"Maximum price is : "<<maximum<<endl;
}

int main(){
    int price[7]={100, 200, 300, 400, 500, 600, 700};
    int *ptr=price;
    max(ptr, 7);
    return 0;
}