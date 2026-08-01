#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    void setupAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            // Check so the account doesn't go negative
            cout << "Error: Insufficient funds!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void display() {
        cout << "Account: " << accountNumber << " | Balance: $" 
		<< balance << endl;
    }
};

int main() {
    BankAccount myAcc;
    myAcc.setupAccount(556677, 1000.0); // Start with a grand

    myAcc.deposit(500.0);
    myAcc.withdraw(200.0);
    myAcc.withdraw(2000.0); // This should trigger the error

    myAcc.display();
    return 0;
}
