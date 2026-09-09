#include <iostream>
using namespace std;
class Staff {
    string name;
    string post;
    double salary;
public:
    void accept() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Post: ";
        getline(cin, post);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    string getPost() {
        return post;
    }
    void display() {
        cout << "\nName   : " << name;
        cout << "\nPost   : " << post;
        cout << "\nSalary : " << salary << endl;
    }
};
int main() {
    Staff staff[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of Staff " << i + 1 << ":\n";
        staff[i].accept();
    }
    cout << "\ntaff Members with Post = \"HOD\"";
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (staff[i].getPost() == "HOD") {
            staff[i].display();
            found = true;
        }
    if (!found) {
        cout << "\nNo staff member holds the post of HOD." << endl;
    }
    return 0;
}
