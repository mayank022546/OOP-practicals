#include <iostream>
using namespace std;
class Book {
    string title;
    string author;
    int pages;
    double price;
public:
    void accept() {
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Number of Pages: ";
        cin >> pages;
        cout << "Enter Price: ";
        cin >> price;
    }
    void display() {
        cout << "\nBook Details";
        cout << "\nTitle  : " << title;
        cout << "\nAuthor : " << author;
        cout << "\nPages  : " << pages;
        cout << "\nPrice  : " << price << endl;
    }
};
int main() {
    Book b;
    b.accept();
    b.display();
    return 0;
}
