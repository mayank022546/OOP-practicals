#include <iostream>
using namespace std;
class Account {
    int accNo;
    string holderName;
    string accType;
    double balance;
public:
    void accept() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, holderName);
        cout << "Enter Account Type (Savings/Current): ";
        getline(cin, accType);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else
            balance -= amount;
    }
    void display() {
        cout << "\nAccount Details";
        cout << "\nAccount No     : " << accNo;
        cout << "\nHolder Name    : " << holderName;
        cout << "\nAccount Type   : " << accType;
        cout << "\nCurrent Balance: " << balance << endl;
    }
};

int main() {
    Account a;
    a.accept();
    double amt;
    cout << "\nEnter amount to deposit: ";
    cin >> amt;
    a.deposit(amt);
    cout << "Enter amount to withdraw: ";
    cin >> amt;
    a.withdraw(amt);
    a.display();
    return 0;
}
