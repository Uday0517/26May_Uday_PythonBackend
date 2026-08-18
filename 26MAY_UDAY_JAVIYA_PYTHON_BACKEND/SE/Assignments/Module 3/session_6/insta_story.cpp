#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory(int views) : storyViews(views) {}
};

class SponsoredStory : public InstaStory {
public:
    SponsoredStory(int views) : InstaStory(views) {}

    void displayViews() {
        // Can access storyViews directly because it's "protected", not private
        cout << "Sponsored Story Views: " << storyViews << "\n";
    }
};

int main() {
    SponsoredStory ad(45230);
    ad.displayViews();
    return 0;
}
