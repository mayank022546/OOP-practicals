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
    friend void display(Employee e);  
};
void display(Employee e) {
    cout << "\nEmployee Details";
    cout << "\nEmployee ID: " << e.empId;
    cout << "\nName: " << e.name;
    cout << "\nSalary: " << e.salary << endl;
}
int main() {
    Employee emp;
    emp.accept();
    display(emp);
    return 0;
}
