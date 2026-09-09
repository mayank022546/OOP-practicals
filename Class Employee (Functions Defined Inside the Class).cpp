#include <iostream>
using namespace std;
class Employee {
    int empId;
    string name;
    double salary;
public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void display() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName       : " << name;
        cout << "\nSalary     : " << salary << endl;
    }
};
int main() {
    Employee e;
    e.accept();
    e.display();
    return 0;
}
