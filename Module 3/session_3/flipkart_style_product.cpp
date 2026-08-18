#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productName;
    double price;
    double rating;

public:
    Product(string name, double p, double r)
        : productName(name), price(p), rating(r) {}

    void displayInfo() {
        cout << "Product: " << productName << "\n";
        cout << "Price: Rs. " << price << "\n";
        cout << "Rating: " << rating << " / 5\n";
    }
};

int main() {
    Product item("Wireless Earbuds", 1499.99, 4.3);
    item.displayInfo();
    return 0;
}
