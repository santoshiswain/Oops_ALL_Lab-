#include <iostream>
using namespace std;

int main() {
    int books[6];
    cout << "Enter the IDs of 6 books:\n";
    for (int i = 0; i < 6; i++) {
        cin >> books[i];
    }
    int *ptr = books;
    cout << "Book IDs and their addresses:\n";

    for (int i = 0; i < 6; i++) {
        cout << "Book ID : " << *ptr << endl;
        cout << "Address: " << ptr << endl;
        ptr++;   
    }
    return 0;
}