#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string newSong;

    cout << "Enter a new song to add to your favorites: ";
    getline(cin, newSong);

    // ios::app = append mode -> writes at the end, doesn't erase existing content
    ofstream outFile("my_fav_songs.txt", ios::app);

    if (!outFile) {
        cout << "Error opening file for appending!\n";
        return 1;
    }

    outFile << newSong << "\n";
    outFile.close();

    cout << "\"" << newSong << "\" was added to my_fav_songs.txt\n";

    // Show updated file
    ifstream inFile("my_fav_songs.txt");
    string song;
    cout << "\nUpdated Song List:\n";
    while (getline(inFile, song)) {
        cout << "- " << song << "\n";
    }
    inFile.close();

    return 0;
}
