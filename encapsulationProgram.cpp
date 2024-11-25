// Encapsulation is the bundling of data and methods that operate on the data within a single unit, such as a class. 
// It also restricts direct access to some of the object's components, which is a way of restricting unauthorized access to data.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data member

public:
    // Constructor
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Public function to deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    // Public function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal amount!" << endl;
    }

    // Public function to get balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);  // Create a bank account object
    cout << "Initial balance: " << account.getBalance() << endl;

    account.deposit(500);  // Deposit money
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(200);  // Withdraw money
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    return 0;
}
