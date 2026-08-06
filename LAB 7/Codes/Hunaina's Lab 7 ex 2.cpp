#include <iostream>
using namespace std;

// Base Class: Person
class Person {
protected:
    string name;
    string address;
    string phone;

public:
    // Constructor
    Person(string n, string a, string p) {
        name = n;
        address = a;
        phone = p;
    }

    // Display function
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
    }
};

// Derived Class: BankAccount
class BankAccount : public Person {
protected:
    int accountNumber;
    double balance;

public:
    // Constructor chaining (calling Person constructor)
    BankAccount(string n, string a, string p, int accNo, double bal)
        : Person(n, a, p) {
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit function
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Display account info
    void displayAccount() {
        displayPerson(); // calling base class function
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived Class: LoanAccount
class LoanAccount : public BankAccount {
private:
    double loanAmount;
    double interestRate;

public:
    // Constructor chaining (calling BankAccount constructor)
    LoanAccount(string n, string a, string p, int accNo, double bal,
                double loan, double rate)
        : BankAccount(n, a, p, accNo, bal) {
        loanAmount = loan;
        interestRate = rate;
    }

    // Calculate total repayable amount
    double calculateRepayment() {
        return loanAmount + (loanAmount * interestRate / 100);
    }

    // Display loan info
    void displayLoan() {
        displayAccount();
        cout << "Loan Amount: " << loanAmount << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Total Repayable Amount: " << calculateRepayment() << endl;
    }
};

// Main Function
int main() {
    // Creating object of LoanAccount
    LoanAccount obj("Hunaina", "Rawalpindi", "0311123789",
                    12345, 10000, 30000, 20);

    cout << "\n--- Initial Details ---\n";
    obj.displayLoan();

    cout << "\n--- After Transactions ---\n";
    obj.deposit(2000);
    obj.withdraw(1000);

    obj.displayLoan();

    return 0;
}
