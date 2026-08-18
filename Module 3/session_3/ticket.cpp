#include <iostream>
using namespace std;

class Ticket {
public:
    Ticket() {
        cout << "Ticket booked! Processing your booking...\n";
    }

    ~Ticket() {
        cout << "Saving your ticket...\n";
    }
};

int main() {
    Ticket* myTicket = new Ticket();   // constructor runs

    cout << "Enjoy the show!\n";

    delete myTicket;   // destructor runs here

    return 0;
}
