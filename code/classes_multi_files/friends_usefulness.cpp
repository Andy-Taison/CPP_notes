#include <iostream>
#include <windows.h> // £ symbol

class BankAccount; // forward declaration

// Class declaration
class Transaction {
    public:
        void makeDeposit(BankAccount &account, double amount);
        void makeWithdrawal(BankAccount &account, double amount);
};


// Class definition
class BankAccount {
    private:
        double balance;

    public:
        // Constructor
        BankAccount(double initialBalance) : balance(initialBalance) {}

        // Declare Transaction as a friend class
        // Transaction now has access to BankAccount private members (and able to modify)
        friend class Transaction;

        // Function to display the balance
        void displayBalance() const {
            std::cout << "Current Balance: £" << balance << std::endl;
        }
};

// Implementation of Transaction class functions
void Transaction::makeDeposit(BankAccount &account, double amount) {
    // Access the private member balance of BankAccount
    account.balance += amount;
    std::cout << "Deposit successful. New balance: £" << account.balance << std::endl;
}

void Transaction::makeWithdrawal(BankAccount &account, double amount) {
    if (amount <= account.balance) {
        // Access the private member balance of BankAccount
        account.balance -= amount;
        std::cout << "Withdrawal successful. New balance: £" << account.balance << std::endl;
    } else {
        std::cout << "Insufficient funds. Withdrawal unsuccessful." << std::endl;
    }
}

int main() {
     // Set console output to Unicode
    SetConsoleOutputCP(CP_UTF8);

    BankAccount myAccount(1000);
    Transaction transaction;

    myAccount.displayBalance();

    transaction.makeDeposit(myAccount, 500);
    myAccount.displayBalance();

    transaction.makeWithdrawal(myAccount, 200);
    myAccount.displayBalance();

    return 0;
}
