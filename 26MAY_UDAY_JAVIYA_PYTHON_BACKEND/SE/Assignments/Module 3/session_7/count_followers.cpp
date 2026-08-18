#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("insta_followers.txt");

    if (!inFile) {
        cout << "Error: insta_followers.txt not found!\n";
        return 1;
    }

    string username;
    int followerCount = 0; // just a running counter - no array/vector used

    while (getline(inFile, username)) {
        if (!username.empty()) {   // skip blank lines
            followerCount++;
        }
    }

    inFile.close();

    cout << "Total number of followers listed: " << followerCount << "\n";
    return 0;
}
