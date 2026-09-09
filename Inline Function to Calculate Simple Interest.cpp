#include <iostream>
using namespace std;
inline double simpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}
int main() {
    double p, r, t;
    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    cout << "Enter Time (in years): ";
    cin >> t;
    cout << "Simple Interest = " << simpleInterest(p, r, t) << endl;
    return 0;
}
