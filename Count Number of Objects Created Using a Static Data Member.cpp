#include <iostream>
using namespace std;
class Counter {
    static int count;  
public:
    Counter() {
        count++;   
    }
    static void display() {
        cout << "Number of objects created = " << count << endl;
    }
};
int Counter::count = 0;  
int main() {
    Counter c1;
    Counter c2;
    Counter c3;
    Counter::display();
    return 0;
}
