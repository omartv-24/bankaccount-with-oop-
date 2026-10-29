#include <iostream>
using namespace std;

class BankAccount {
public:
   string owner;
   double balance;

    void deposit(double amount) {
        balance = balance + amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
        }
        else {
            cout << "Not enough money." << endl;
        }
    }

    double showBalance() {
        
        return balance; 
    }
};

int main() {

    BankAccount account1;

    account1.owner = "Omar";
    account1.balance = 1000;

    cout << account1.showBalance() << endl; 

    account1.deposit(500);

    cout << account1.showBalance() << endl; 

    account1.withdraw(300);

    cout << account1.showBalance() << endl; 

    return 0;
}