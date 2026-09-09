#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string subjects[5] = {"Maths", "Physics", "Chemistry", "English", "Computer"};
    int marks[5] = {95, 88, 92, 79, 99};
    cout << left  << setw(15) << "Subject"
         << right << setw(10) << "Marks" << endl;
    cout << string(25, '-') << endl;
    for (int i = 0; i < 5; i++) {
        cout << left  << setw(15) << subjects[i]
             << right << setw(10) << marks[i] << endl;
    }
    return 0;
}
