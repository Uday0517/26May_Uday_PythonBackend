#include <iostream>
#include <string>
using namespace std;

// Abstract class — has at least one pure virtual function
class Product {
public:
    virtual void upload() = 0;   // pure virtual = abstract method
    virtual ~Product() {}
};

class Electronics : public Product {
public:
    void upload() override {
        cout << "Uploading Electronics product: verifying warranty and specs sheet...\n";
    }
};

class Clothing : public Product {
public:
    void upload() override {
        cout << "Uploading Clothing product: adding size chart and fabric details...\n";
    }
};

int main() {
    // Product p; // ERROR - can't instantiate an abstract class directly

    Product* item1 = new Electronics();
    Product* item2 = new Clothing();

    item1->upload();
    item2->upload();

    delete item1;
    delete item2;
    return 0;
}
