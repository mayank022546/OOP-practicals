#include <iostream>
using namespace std;
class Student {
    int rollNo;
    string name;
    string branch;
    float percentage;
public:
    void accept();
    void display();
};
void Student::accept() {
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Branch: ";
    cin >> branch;
    cout << "Enter Percentage: ";
    cin >> percentage;
}
void Student::display() {
    cout << "\n Student Information";
    cout << "\nRoll No    : " << rollNo;
    cout << "\nName       : " << name;
    cout << "\nBranch     : " << branch;
    cout << "\nPercentage : " << percentage << "%" << endl;
}
int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
