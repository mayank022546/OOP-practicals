#include <iostream>
using namespace std;
class Product {
    int productId;
    string productName;
    double price;
    int quantity;
public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> productId;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, productName);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }
    double totalValue() {
        return price * quantity;
    }
    void display() {
        cout << "\nProduct Details";
        cout << "\nProduct ID   : " << productId;
        cout << "\nProduct Name : " << productName;
        cout << "\nPrice        : " << price;
        cout << "\nQuantity     : " << quantity;
        cout << "\nTotal Value  : " << totalValue() << endl;
    }
};
int main() {
    Product p;
    p.accept();
    p.display();
    return 0;
}
