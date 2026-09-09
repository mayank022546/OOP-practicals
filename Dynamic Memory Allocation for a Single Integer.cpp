#include <iostream>
using namespace std;
int main() { 
    int *ptr = new int;   
    cout << "Enter an integer value: ";
    cin >> *ptr;
    cout << "You entered: " << *ptr << endl;
    delete ptr;  
    ptr = nullptr;
    return 0;
}
