#include <iostream>
using namespace std;
class Student {
    int rollNo;
    string name;
    float percentage;
public:
    void accept() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    string getName() {
        return name;
    }
    float getPercentage() {
        return percentage;
    }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name
             << ", Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Student stu[10];
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        stu[i].accept();
    }
    cout << "\nStudents with Percentage > 75%\n";
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (stu[i].getPercentage() > 75) {
            cout << "Name: " << stu[i].getName()
                 << " (Percentage: " << stu[i].getPercentage() << "%)" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No student scored above 75%." << endl;
    }
    return 0;
}
