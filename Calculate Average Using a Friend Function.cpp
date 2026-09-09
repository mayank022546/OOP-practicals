#include <iostream>
using namespace std;
class Marks {
    int m1, m2, m3;
public:
    void accept() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    friend float average(Marks m);
};
float average(Marks m) {
    return (m.m1 + m.m2 + m.m3) / 3.0;
}
int main() {
    Marks obj;
    obj.accept();
    cout << "Average Marks = " << average(obj) << endl;
    return 0;
}
