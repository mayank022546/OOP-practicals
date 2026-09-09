#include <iostream>
using namespace std;
class ClassB;  
class ClassA {
    int valueA;
public:
    void accept() {
        cout << "Enter value for Class A: ";
        cin >> valueA;
    }
    friend int addValues(ClassA a, ClassB b);  
};
class ClassB {
    int valueB;
public:
    void accept() {
        cout << "Enter value for Class B: ";
        cin >> valueB;
    }
    friend int addValues(ClassA a, ClassB b);  
};
int addValues(ClassA a, ClassB b) {
    return a.valueA + b.valueB;
}
int main() {
    ClassA objA;
    ClassB objB;
    objA.accept();
    objB.accept();
    cout << "Sum of private members = " << addValues(objA, objB) << endl;
    return 0;
}
