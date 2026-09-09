#include <iostream>
using namespace std;
class Employee {
    int empId;
    string name;
    static int totalEmployees;  
public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> name;
        totalEmployees++;
    }
    static void showTotal() {   
        cout << "Total Employees = " << totalEmployees << endl;
    }
};
int Employee::totalEmployees = 0;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee *emp = new Employee[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].accept();
    }
    Employee::showTotal();  
    delete[] emp;
    return 0;
}
