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

int main() {
    YouTuber yt("tech_guru", 15000, "TechGuruOfficial");
    yt.displayProfile();
    yt.uploadVideo("Top 10 Laptops of 2026");
    return 0;
}
