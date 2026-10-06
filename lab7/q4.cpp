#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(int acc, double bal, double rate): BankAccount(acc, bal) {
        interestRate = rate;
    }
    void display() {
        double interest = balance * interestRate / 100;
        double updatedBalance = balance + interest;

        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << updatedBalance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(int acc, double bal, double minBal, double charge)
        : BankAccount(acc, bal) {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void display() {
        if (balance < minimumBalance)
            balance -= maintenanceCharge;

        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(1001, 50000, 5);
    CurrentAccount c(1002, 8000, 10000, 500);

    s.display();

    cout << endl;

    c.display();

    return 0;
}