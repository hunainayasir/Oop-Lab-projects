#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNum;
    string holderName;
    float balance;

public:
    BankAccount(int acc, string name, float bal) {
        accountNum = acc;
        holderName = name;
        balance = bal;
    }

    ~BankAccount() {
        cout << "Account details for " << holderName 
		<< " saved successfully. " << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount 
			<< ". Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void showBalance() {
        cout << "Final Balance: " << balance << endl;
    }
};

int main() {
    int acc;
    string name;
    float bal;

    cout << "Enter Account Number, Name, and Initial Balance: ";
    cin >> acc >> name >> bal;

    BankAccount myAccount(acc, name, bal);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.showBalance();

    return 0;
}
