#include<iostream>
using namespace std;

int main(){
    int seat[8];
    cout << "Enter the IDs of 8 seats:\n";
    for (int i = 0; i < 8; i++) {
        cin >> seat[i];
    }
    int *ptr = seat;
    cout << "Seat IDs :\n";

    for (int i = 0; i < 8; i++) {
        cout << "Seat ID before change: " << *ptr << endl;
        cout<<"Enter seat number you want to update: "<<endl;
        int seatidafter;
        cin>>seatidafter;
        *ptr = seatidafter;
        cout << "Seat number after change: " << *ptr << endl;
        ptr++;   
    }
    return 0;
}