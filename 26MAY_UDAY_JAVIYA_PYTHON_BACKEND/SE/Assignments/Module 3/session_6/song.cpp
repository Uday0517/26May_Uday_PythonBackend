#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    Song(string t, string a) : title(t), artist(a) {}

    // Getters
    string getTitle() { return title; }
    string getArtist() { return artist; }

    // Setters
    void setTitle(string t) { title = t; }
    void setArtist(string a) { artist = a; }

    void display() {
        cout << "Title: " << title << ", Artist: " << artist << "\n";
    }
};

int main() {
    Song mySong("Old Title", "Unknown Artist");

    cout << "Before update:\n";
    mySong.display();

    mySong.setTitle("Blinding Lights");

    cout << "\nAfter update:\n";
    mySong.display();

    return 0;
}
