#include <iostream>
using namespace std;

class BankAccount {
  private:
    string account_number;
    double balance;
  
  public:
    void set_account_number(string num) {
        account_number = num;
    }
    void set_balance(double bal) {
        balance = bal;
    }
    double get_balance() {
        return balance;
    }
};

int main() {
  BankAccount account1;
  account1.set_account_number("123456789");
  account1.set_balance(1000.00);

  cout << "Account balance: $" << account1.get_balance() << endl;

  return 0;
}