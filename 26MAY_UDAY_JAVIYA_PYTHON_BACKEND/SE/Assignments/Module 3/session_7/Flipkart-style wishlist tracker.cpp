#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("wishlist.txt");

    if (!outFile) {
        cout << "Error opening file for writing!\n";
        return 1;
    }

    string productName;
    double price;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter name of product " << i << ": ";
        getline(cin, productName);

        cout << "Enter price of " << productName << ": Rs. ";
        cin >> price;
        cin.ignore(); // clear leftover newline after reading a number

        outFile << productName << "," << price << "\n";
        cout << "\n";
    }

    outFile.close();
    cout << "Wishlist saved to wishlist.txt!\n\n";

    // Read the file back and display it
    ifstream inFile("wishlist.txt");
    string line;

    cout << "--- Your Wishlist ---\n";
    while (getline(inFile, line)) {
        size_t commaPos = line.find(',');
        string name = line.substr(0, commaPos);
        string priceStr = line.substr(commaPos + 1);
        cout << name << " - Rs. " << priceStr << "\n";
    }
    inFile.close();

    return 0;
}
