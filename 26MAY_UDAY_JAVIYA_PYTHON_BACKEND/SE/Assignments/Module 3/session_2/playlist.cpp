#include <iostream>
#include <string>
using namespace std;

class Playlist {
private:
    string name;
    string createdOn;   // storing date as a string, e.g. "2026-08-18"
    bool isPublic;

public:
    Playlist(string n, string date, bool pub)
        : name(n), createdOn(date), isPublic(pub) {}

    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Created On: " << createdOn << "\n";
        cout << "Is Public: " << (isPublic ? "true" : "false") << "\n";
    }
};

int main() {
    Playlist myPlaylist("Chill Vibes", "2026-08-18", true);
    myPlaylist.printDetails();
    return 0;
}
