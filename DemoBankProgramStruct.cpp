#include <iostream>
#include <string>

using namespace std;

// account struct
struct Account {
    string name;
    int accountNumber;
    double balance;
};

// deposit function
void deposit(Account* account, double amount) {
    account->balance += amount;
    cout << "New balance: " << account->balance << endl;
}

// withdraw function
void withdraw(Account* account, double amount) {
    if (amount > account->balance) {
        cout << "Insufficient funds." << endl;
    } else {
        account->balance -= amount;
        cout << "New balance: " << account->balance << endl;
    }
}

// view account information function
void viewAccountInfo(Account* account) {
    cout << "Account holder: " << account->name << endl;
    cout << "Account number: " << account->accountNumber << endl;
    cout << "Balance: " << account->balance << endl;
}

int main() {
    // get account information from user
    Account account;
    cout << "Enter your name to create an account: ";
    cin >> account.name;
    cout << "Enter your account number: ";
    cin >> account.accountNumber;
    cout << "Enter your starting balance: ";
    cin >> account.balance;

    // perform operations
    int choice;
    do {
        cout << endl << "1 - Deposit" << endl;
        cout << "2 - Withdraw" << endl;
        cout << "3 - View account information" << endl;
        cout << "0 - Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                double depositAmount;
                cout << "Enter the amount you want to deposit: ";
                cin >> depositAmount;
                deposit(&account, depositAmount);
                break;
            case 2:
                double withdrawAmount;
                cout << "Enter the amount you want to withdraw: ";
                cin >> withdrawAmount;
                withdraw(&account, withdrawAmount);
                break;
            case 3:
                viewAccountInfo(&account);
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}