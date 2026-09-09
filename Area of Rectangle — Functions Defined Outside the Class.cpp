#include <iostream>
using namespace std;
class Rectangle {
    double length, breadth;
public:
    void accept();
    double area();
    void display();
};
void Rectangle::accept() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
}
double Rectangle::area() {
    return length * breadth;
}
void Rectangle::display() {
    cout << "Length  = " << length << endl;
    cout << "Breadth = " << breadth << endl;
    cout << "Area    = " << area() << endl;
}
int main() {
    Rectangle r;
    r.accept();
    r.display();
    return 0;
}
