#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Playlist {
private:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;   // initialized empty automatically

public:
    Playlist(string n, string date, bool pub)
        : name(n), createdOn(date), isPublic(pub), songs() {}

    void togglePublic() {
        isPublic = !isPublic;
    }

    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }

    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Created On: " << createdOn << "\n";
        cout << "Is Public: " << (isPublic ? "true" : "false") << "\n";
    }

    void showSongs() {
        cout << "Songs in \"" << name << "\":\n";
        for (int i = 0; i < (int)songs.size(); i++) {
            cout << "  " << i + 1 << ". " << songs[i] << "\n";
        }
    }
};

int main() {
    Playlist myPlaylist("Chill Vibes", "2026-08-18", true);

    myPlaylist.addSong("Blinding Lights");
    myPlaylist.addSong("Levitating");
    myPlaylist.addSong("Watermelon Sugar");

    myPlaylist.printDetails();
    cout << "\n";
    myPlaylist.showSongs();

    return 0;
}
