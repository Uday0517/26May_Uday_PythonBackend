#include <iostream>
#include <string>
using namespace std;

class Playlist {
private:
    string name;

public:
    // Default constructor
    Playlist() {
        name = "My Favourites";
        cout << "Welcome! Your playlist \"" << name << "\" has been created.\n";
    }

    void printDetails() {
        cout << "Playlist Name: " << name << "\n";
    }
};

int main() {
    Playlist myPlaylist;   // default constructor runs automatically
    myPlaylist.printDetails();
    return 0;
}
