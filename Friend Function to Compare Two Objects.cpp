#include <iostream>
using namespace std;
class Box {
    double volume;
public:
    void accept() {
        double l, w, h;
        cout << "Enter length, width, height: ";
        cin >> l >> w >> h;
        volume = l * w * h;
    }
    friend void compare(Box b1, Box b2); 
};
void compare(Box b1, Box b2) {
    if (b1.volume > b2.volume)
        cout << "Box 1 has greater volume (" << b1.volume << ")" << endl;
    else if (b2.volume > b1.volume)
        cout << "Box 2 has greater volume (" << b2.volume << ")" << endl;
    else
        cout << "Both boxes have equal volume (" << b1.volume << ")" << endl;
}
int main() {
    Box box1, box2;
    cout << "Box 1:\n";
    box1.accept();
    cout << "Box 2:\n";
    box2.accept();
    compare(box1, box2);
    return 0;
}
