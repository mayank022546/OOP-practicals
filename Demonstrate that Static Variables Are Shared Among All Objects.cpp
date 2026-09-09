#include <iostream>
using namespace std;
class Demo {
public:
    static int sharedValue;   
    int normalValue;          
    Demo() {
        normalValue = 0;
    }
};
int Demo::sharedValue = 0;
int main() {
    Demo obj1, obj2, obj3;
    obj1.sharedValue = 50;   
    obj1.normalValue = 10;
    obj2.normalValue = 20;
    obj3.normalValue = 30;
    cout << "Static member accessed via all objects:\n";
    cout << "obj1.sharedValue = " << obj1.sharedValue << endl;
    cout << "obj2.sharedValue = " << obj2.sharedValue << endl;
    cout << "obj3.sharedValue = " << obj3.sharedValue << endl;
    cout << "\nNon-static member is separate for each object:\n";
    cout << "obj1.normalValue = " << obj1.normalValue << endl;
    cout << "obj2.normalValue = " << obj2.normalValue << endl;
    cout << "obj3.normalValue = " << obj3.normalValue << endl;
    return 0;
}
