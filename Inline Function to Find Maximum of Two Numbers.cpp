#include <iostream>
using namespace std;
inline int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum = " << max(a, b) << endl;
    return 0;
}
