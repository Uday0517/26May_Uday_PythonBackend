#include <iostream>
#include <string>
using namespace std;

class Playlist {
private:
    string name;
    string createdOn;
    bool isPublic;

public:
    Playlist(string n, string date, bool pub)
        : name(n), createdOn(date), isPublic(pub) {}

    void togglePublic() {
        isPublic = !isPublic;
    }

    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Created On: " << createdOn << "\n";
        cout << "Is Public: " << (isPublic ? "true" : "false") << "\n";
    }
};

int main() {
    Playlist myPlaylist("Chill Vibes", "2026-08-18", true);

    cout << "Initial state:\n";
    myPlaylist.printDetails();

    myPlaylist.togglePublic();
    cout << "\nAfter 1st toggle:\n";
    myPlaylist.printDetails();

    myPlaylist.togglePublic();
    cout << "\nAfter 2nd toggle:\n";
    myPlaylist.printDetails();

    return 0;
}
