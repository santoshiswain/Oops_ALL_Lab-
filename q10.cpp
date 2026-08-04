#include <iostream>
using namespace std;

class ElectricityBill {
private:
    int consumerNumber;
    string consumerName;
    int unitsConsumed;
    float totalBill;

public:
    
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cout << "Enter Consumer Name: ";
        cin >> consumerName;

        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    
    void calculateBill() {
        if (unitsConsumed <= 100) {
            totalBill = unitsConsumed * 5;
        }
        else if (unitsConsumed <= 200) {
            totalBill = (100 * 5) + 
                        ((unitsConsumed - 100) * 7);
        }
        else {
            totalBill = (100 * 5) + 
                        (100 * 7) + 
                        ((unitsConsumed - 200) * 10);
        }
    }

    
    void displayBill() {
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << unitsConsumed << endl;
        cout << "Total Bill      : Rs. " << totalBill << endl;
    }
};

int main() {
    ElectricityBill bill;

    bill.acceptDetails();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}