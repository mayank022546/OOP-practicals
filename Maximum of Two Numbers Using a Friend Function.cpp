#include <iostream>
using namespace std;
class Numbers {
    int a, b;
public:
    void accept() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    friend int findMax(Numbers n);  
};
int findMax(Numbers n) {
 
    return (n.a > n.b) ? n.a : n.b;
}
int main() {
    Numbers num;
    num.accept();
    cout << "Maximum = " << findMax(num) << endl;
    return 0;
}
