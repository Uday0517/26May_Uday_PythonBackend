#include <iostream>
#include <string>
using namespace std;

class ProductSearch {
public:
    // Version 1: search by name only
    void searchProduct(string productName) {
        cout << "Searching for \"" << productName << "\" across all categories...\n";
        cout << "Result: Found 25 matches for \"" << productName << "\".\n";
    }

    // Version 2: search by name and category
    void searchProduct(string productName, string category) {
        cout << "Searching for \"" << productName << "\" in category \"" << category << "\"...\n";
        cout << "Result: Found 4 matches for \"" << productName << "\" under \"" << category << "\".\n";
    }
};

int main() {
    ProductSearch search;

    // Demo 1: name only
    search.searchProduct("iPhone 15");

    cout << "\n";

    // Demo 2: name + category
    search.searchProduct("iPhone 15", "Mobiles & Accessories");

    return 0;
}
