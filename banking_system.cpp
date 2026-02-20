#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount() {
        cout << "\nEnter Customer Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit Successful!\n";
    }

    void withdraw() {
        double amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
    }

    void display() {
        cout << "\n===== Account Details =====\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n===== Banking System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Thank you for using Banking System!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
