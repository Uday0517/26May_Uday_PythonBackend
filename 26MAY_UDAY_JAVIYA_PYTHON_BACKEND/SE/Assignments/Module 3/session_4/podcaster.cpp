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

class Podcaster : public SocialMediaUser {
protected:
    string podcastName;

public:
    Podcaster(string uname, int f, string podcast)
        : SocialMediaUser(uname, f), podcastName(podcast) {}

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle << " published on " << podcastName << "\n";
    }
};

int main() {
    Podcaster pc("mindful_mike", 8000, "The Mindful Minute");
    pc.displayProfile();
    pc.publishEpisode("How to Focus in a Distracted World");
    return 0;
}
