#include <iostream>
using namespace std;
class Employee {
    string name;
    int id;
    string department;
public:
    void accept() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, department);
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department << endl;
    }
};
int main() {
    Employee emp[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp[i].accept();
    }
    cout << "\nEmployee Details";
    for (int i = 0; i < 5; i++) {
        cout << "\n\n--- Employee " << i + 1 << " ---";
        emp[i].display();
    }
    return 0;
}
