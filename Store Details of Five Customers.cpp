#include <iostream>
using namespace std;
class Customer {
    int custId;
    string name;
    string address;
    string phoneNo;
public:
    void accept() {
        cout << "Enter Customer ID: ";
        cin >> custId;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Phone Number: ";
        getline(cin, phoneNo);
    }
    void display() {
        cout << "\nCustomer ID : " << custId;
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nPhone No: " << phoneNo << endl;
    }
};
int main() {
    Customer cust[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of Customer " << i + 1 << ":\n";
        cust[i].accept();
    }
    cout << "\nCustomer Details";
    for (int i = 0; i < 5; i++) {
        cout << "\n\n--- Customer " << i + 1 << " ---";
        cust[i].display();
    }
    return 0;
}
