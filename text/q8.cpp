#include<iostream>
using namespace std;

void update(int *ptr, int n){
    //add by 10
    for(int i=0; i<n; i++){
        *(ptr+i) = *(ptr+i)+10;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int score[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>score[i];
    }
    int *ptr=score;
    cout<<"Before modification: "<<endl;
    for(int i=0; i<n; i++){
        cout<<*(ptr+i)<<"\n ";
    }
    update(ptr, n);
    cout<<"After modification: "<<endl;
    for(int i=0; i<n; i++){
        cout<<*(ptr+i)<<"\n ";
    }
    return 0;
}