#include <iostream>
using namespace std;
int main() {
    float f = 9.87;
    int x = (int)f;        
    int y = int(f);        
    int z = static_cast<int>(f);  
    cout << "Float value  = " << f << endl;
    cout << "C-style cast        = " << x << endl;
    cout << "Function-style cast = " << y << endl;
    cout << "static_cast         = " << z << endl;
    return 0;
}
