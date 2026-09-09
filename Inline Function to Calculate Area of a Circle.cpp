#include <iostream>
using namespace std;
inline double area(double radius) {
    return 3.14159 * radius * radius;
}
int main() {
    double r;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << area(r) << endl;
    return 0;
}
