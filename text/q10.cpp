#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int* ids = new int[n];
    cout << "Enter student IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ids + i);
    }
    int searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;
    int* ptr = ids;
    int position = 0;
    bool f = false;
    while (ptr < ids + n) {
        if (*ptr == searchID) {
            f = true;
            break;
        }

        ptr++;
        position++;
    }

    if (f) {
        cout << "ID found at position: " << position + 1 << endl;
    } else {
        cout << "ID not found." << endl;
    }

    delete[] ids;
     return 0;
}