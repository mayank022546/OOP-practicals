#include <iostream>
using namespace std;
inline void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After Swap : x = " << x << ", y = " << y << endl;
    return 0;
}
