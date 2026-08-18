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

// Hierarchical inheritance: SocialMediaUser is parent to YouTuber, Podcaster, and InstagramInfluencer
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

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string uname, int f)
        : SocialMediaUser(uname, f) {}

    void postStory(string storyTitle) {
        cout << username << " posted a new story: " << storyTitle << "\n";
    }
};

int main() {
    // Three different children, one common parent
    YouTuber yt("tech_guru", 15000, "TechGuruOfficial");
    Podcaster pc("mindful_mike", 8000, "The Mindful Minute");
    InstagramInfluencer insta("wanderlust_amy", 25000);

    yt.displayProfile();
    yt.uploadVideo("Top 10 Laptops of 2026");

    pc.displayProfile();
    pc.publishEpisode("How to Focus in a Distracted World");

    insta.displayProfile();
    insta.postStory("Sunset in Santorini");

    return 0;
}
