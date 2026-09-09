#include <iostream>
using namespace std;
namespace Physics {
    string subject = "Physics - Study of Matter and Energy";
}
namespace Chemistry {
    string subject = "Chemistry - Study of Substances";
}
int main() {
    cout << "Physics::subject   -> " << Physics::subject << endl;
    cout << "Chemistry::subject -> " << Chemistry::subject << endl;
    return 0;
}
