#include <iostream>
#include <string>
using namespace std;

// Holds the constructor "arguments" as one object
struct FoodOrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
private:
    int orderId;
    string restaurantName;
    bool isDelivered;

public:
    // Constructor now takes a single object instead of separate args
    FoodOrder(FoodOrderData data)
        : orderId(data.orderId),
          restaurantName(data.restaurantName),
          isDelivered(data.isDelivered) {}

    void markDelivered() {
        isDelivered = true;
        cout << "Order #" << orderId << " from " << restaurantName
             << " has been marked as delivered!\n";
    }
};

int main() {
    // Instantiation using the object-style constructor
    FoodOrder order({101, "Pizza Palace", false});

    order.markDelivered();
    return 0;
}
