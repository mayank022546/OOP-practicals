#include <iostream>
using namespace std;
class Bank {
    int accNo;
    string holderName;
    double balance;
    static int totalAccounts;   
public:
    Bank() {
        totalAccounts++;   
    }
     Bank() {
        totalAccounts--;   
    }
    void accept() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Holder Name: ";
        cin >> holderName;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void display() {
        cout << "Account No: " << accNo << ", Holder: " << holderName
             << ", Balance: " << balance << endl;
    }
    static int getTotalAccounts() {
        return totalAccounts;
    }
};
int Bank::totalAccounts = 0;
int main() {
    int n;
    cout << "Enter number of accounts to create: ";
    cin >> n;
    Bank *accounts = new Bank[n];
    for (int i = 0; i < n; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        accounts[i].accept();
    }
    cout << "\n--- All Accounts ---\n";
    for (int i = 0; i < n; i++) {
        accounts[i].display();
    }
    cout << "\nTotal number of accounts = " << Bank::getTotalAccounts() << endl;
    delete[] accounts;
    return 0;
}
