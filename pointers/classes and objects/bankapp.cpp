#include<iostream>

using namespace std;

// the banck acount class
class BankAccount {
    private:
        string accountNumber;
        string balance;

        bool isValidAmount(double amount){
            return amount >= 0;
        }
    public:
        // Constructor to initialize the account
        BankAccount(string accNum, double initialBalance) {
            accountNumber = accNum;
            if (isValidAmount(initialBalance)) {
                balance = to_string(initialBalance);
            } else {
                balance = "0.0";
            }
        }

        // Method to deposit money
        void deposit(double amount) {
            if (isValidAmount(amount)) {
                double currentBalance = stod(balance);
                currentBalance += amount;
                balance = to_string(currentBalance);
                cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        // Method to withdraw money
        void withdraw(double amount) {
            if (isValidAmount(amount)) {
                double currentBalance = stod(balance);
                if (currentBalance >= amount) {
                    currentBalance -= amount;
                    balance = to_string(currentBalance);
                    cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
                } else {
                    cout << "Insufficient funds!" << endl;
                }
            } else {
                cout << "Invalid withdrawal amount!" << endl;
            }
        }

        // Method to display account details
        void displayAccountDetails() {
            cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
        }
};
int main(){
    // Create a BankAccount object
    BankAccount myAccount("123456789", 1000.0);

    // Display account details
    myAccount.displayAccountDetails();

    // Deposit money
    myAccount.deposit(500.0);

    // Withdraw money
    myAccount.withdraw(200.0);

    // Attempt to withdraw more than the balance
    myAccount.withdraw(1500.0);

    // Display final account details
    myAccount.displayAccountDetails();

    return 0;
}
// for eduational purposes only please
