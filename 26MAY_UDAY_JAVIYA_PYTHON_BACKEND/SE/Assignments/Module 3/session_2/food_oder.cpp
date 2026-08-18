#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string restaurantName;
    bool isDelivered;

public:
    FoodOrder(int id, string name, bool delivered)
        : orderId(id), restaurantName(name), isDelivered(delivered) {}

    void markDelivered() {
        isDelivered = true;
        cout << "Order #" << orderId << " from " << restaurantName
             << " has been marked as delivered!\n";
    }
};

int main() {
    FoodOrder order(101, "Pizza Palace", false);
    order.markDelivered();
    return 0;
}
