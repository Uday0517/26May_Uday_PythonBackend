#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("my_fav_songs.txt");

    if (!outFile) {
        cout << "Error opening file for writing!\n";
        return 1;
    }

    outFile << "Blinding Lights\n";
    outFile << "Levitating\n";
    outFile << "Shape of You\n";
    outFile << "Watermelon Sugar\n";
    outFile << "Someone Like You\n";

    outFile.close();

    cout << "5 favorite songs written to my_fav_songs.txt successfully!\n";
    return 0;
}
