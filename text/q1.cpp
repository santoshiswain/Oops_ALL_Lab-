#include <iostream>
using namespace std;

int main() {
    int p;
    int i;
    cout << "Enter the number of parcels delivered: ";
    cin >> p;
    int *ptr = &p;
    cout << "Number of parcels: " << *ptr << endl;
    cout << "Enter the number of additional parcels: ";
    cin >> i;
    *ptr = *ptr + i;
    cout << "Updated number of parcels: " << *ptr << endl;

    return 0;
}