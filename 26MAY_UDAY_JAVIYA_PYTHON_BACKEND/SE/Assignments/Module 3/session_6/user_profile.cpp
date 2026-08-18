//before
/*
class UserProfile {
public:
    string phoneNumber;  // anyone can read/overwrite this directly - bad!
}; */
//after
#include <iostream>
#include <string>
using namespace std;

class UserProfile {
private:
    string phoneNumber;   // now private - can't be accessed directly from outside

public:
    UserProfile(string phone) : phoneNumber(phone) {}

    // Public setter — controls HOW the value can be changed
    void setPhoneNumber(string phone) {
        // You could add validation here, e.g. check length/format
        if (phone.length() == 10) {
            phoneNumber = phone;
        } else {
            cout << "Invalid phone number! Must be 10 digits.\n";
        }
    }

    // Public getter — controls HOW the value can be read
    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user("9876543210");

    cout << "Current phone: " << user.getPhoneNumber() << "\n";

    user.setPhoneNumber("1234567890");
    cout << "Updated phone: " << user.getPhoneNumber() << "\n";

    user.setPhoneNumber("12345");  // invalid - triggers validation message
    cout << "Phone remains: " << user.getPhoneNumber() << "\n";

    return 0;
}
