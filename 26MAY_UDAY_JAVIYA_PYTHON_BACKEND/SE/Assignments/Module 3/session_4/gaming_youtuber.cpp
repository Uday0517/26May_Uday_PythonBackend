#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    SocialMediaUser(string uname, int f)
        : username(uname), followers(f) {}

    void displayProfile() {
        cout << "Username: " << username << ", Followers: " << followers << "\n";
    }
};

class YouTuber : public SocialMediaUser {
protected:
    string channelName;

public:
    YouTuber(string uname, int f, string channel)
        : SocialMediaUser(uname, f), channelName(channel) {}

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to " << channelName << "\n";
    }
};

// Multilevel inheritance: SocialMediaUser -> YouTuber -> GamingYouTuber
class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string uname, int f, string channel)
        : YouTuber(uname, f, channel) {}

    void streamGame(string gameName) {
        cout << username << " is now streaming " << gameName
             << " on " << channelName << "\n";
    }
};

int main() {
    GamingYouTuber gamer("pixel_pro", 50000, "PixelProGaming");

    gamer.displayProfile();      // inherited from SocialMediaUser
    gamer.uploadVideo("Elden Ring Boss Guide"); // inherited from YouTuber
    gamer.streamGame("Elden Ring");             // own method

    return 0;
}
