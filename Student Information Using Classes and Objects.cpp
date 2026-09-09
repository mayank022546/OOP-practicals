#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    string branch;
    float percentage;

public:
    void accept() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void display() {
        cout << "\nRoll No    : " << rollNo;
        cout << "\nName       : " << name;
        cout << "\nBranch     : " << branch;
        cout << "\nPercentage : " << percentage << "%" << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student *students = new Student[n];  // array of objects

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].accept();
    }
    cout << "All Students\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }
    delete[] students;
    return 0;
}
