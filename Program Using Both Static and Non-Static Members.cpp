#include <iostream>
using namespace std;
class Product {
    int productId;         
    string productName;    
    double price;          
    static int nextId;   
    static int totalProducts;  
public:
    Product(string name, double p) {
        productId = nextId++;      
        productName = name;
        price = p;
        totalProducts++;
    }
    void display() {
        cout << "Product ID: " << productId
             << ", Name: " << productName
             << ", Price: " << price << endl;
    }
    static void showTotalProducts() {   // static member function
        cout << "Total Products Created = " << totalProducts << endl;
    }
};
int Product::nextId = 1;         
int Product::totalProducts = 0;
int main() {
    Product p1("Laptop", 55000);
    Product p2("Mouse", 500);
    Product p3("Keyboard", 1200);
    p1.display();
    p2.display();
    p3.display();
    Product::showTotalProducts();
    return 0;
}
