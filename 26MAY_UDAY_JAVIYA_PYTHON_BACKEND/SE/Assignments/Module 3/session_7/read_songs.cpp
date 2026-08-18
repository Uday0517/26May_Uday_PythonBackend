#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("my_fav_songs.txt");

    if (!inFile) {
        cout << "Error: my_fav_songs.txt not found!\n";
        return 1;
    }

    string song;
    cout << "My Favorite Songs:\n";
    while (getline(inFile, song)) {
        cout << "- " << song << "\n";
    }

    inFile.close();
    return 0;
}
