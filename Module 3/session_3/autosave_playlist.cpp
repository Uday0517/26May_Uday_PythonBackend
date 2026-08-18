#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Playlist {
private:
    string name;

public:
    Playlist() {
        name = "My Favourites";
        cout << "Welcome! Your playlist \"" << name << "\" has been created.\n";
    }

    Playlist(string n) : name(n) {
        cout << "Playlist \"" << name << "\" has been created.\n";
    }

    void printDetails() {
        cout << "Playlist Name: " << name << "\n";
    }

    // Destructor: auto-saves playlist name to autosave.txt
    ~Playlist() {
        ofstream outFile("autosave.txt");
        if (outFile.is_open()) {
            outFile << "Auto-saved playlist: " << name << "\n";
            outFile.close();
            cout << "Playlist \"" << name << "\" auto-saved to autosave.txt\n";
        } else {
            cout << "Error: Could not save playlist to file.\n";
        }
    }
};

int main() {
    {
        Playlist myPlaylist("Road Trip Mix");
        myPlaylist.printDetails();
        cout << "Doing other stuff...\n";
    } // <- destructor runs here automatically when scope ends

    cout << "Program continues after playlist is destroyed.\n";
    return 0;
}
