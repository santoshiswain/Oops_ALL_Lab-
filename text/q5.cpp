#include<iostream>
using namespace std;

void updatevisitors(int *count){
 cout<<"Number of visitors for day after update : "<<endl;
 cin>>*count;
}

int main(){
    int m;
    cout<<"Enter the number of visitors for day :"<<endl;
    cin>>m;
    cout<<"Number of visitors for day before update : "<<m<<endl;
    updatevisitors(&m);
    cout<<"Number of visitors for day after update : "<<m<<endl;
    return 0;
}