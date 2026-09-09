#include <iostream>
using namespace std;
class Rectangle {
    double length, breadth;
public:
    void accept() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    double area() {
        return length * breadth;
    }
    void display() {
        cout << "Length  = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area    = " << area() << endl;
    }
};
int main() {
    Rectangle r;
    r.accept();
    r.display();
    return 0;
}
