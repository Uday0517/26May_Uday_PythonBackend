#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content in a generic way...\n";
    }

    virtual ~SocialMediaUploader() {}  // virtual destructor (good practice with virtual functions)
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading a photo/reel to Instagram with filters and hashtags.\n";
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading a video to YouTube with thumbnail, title, and description.\n";
    }
};

int main() {
    InstagramUploader insta;
    YouTubeUploader yt;

    insta.uploadContent();
    yt.uploadContent();

    return 0;
}
