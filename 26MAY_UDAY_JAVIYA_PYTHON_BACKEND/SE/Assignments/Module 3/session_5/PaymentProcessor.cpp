#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor {
public:
    // Version 1: only amount
    void processPayment(double amount) {
        cout << "Single-argument version called.\n";
        cout << "Final amount: Rs. " << amount << "\n";
    }

    // Version 2: amount + coupon code
    void processPayment(double amount, string couponCode) {
        cout << "Two-argument version called (with coupon).\n";
        double discount = 0;

        if (couponCode == "SAVE10") {
            discount = amount * 0.10;
        }

        double finalAmount = amount - discount;
        cout << "Coupon Applied: " << couponCode << "\n";
        cout << "Final amount: Rs. " << finalAmount << "\n";
    }
};

int main() {
    PaymentProcessor processor;

    processor.processPayment(1000.0);
    cout << "\n";
    processor.processPayment(1000.0, "SAVE10");

    return 0;
}
