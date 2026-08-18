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

int main() {
    SocialMediaUser user("tech_guru", 15000);
    user.displayProfile();
    return 0;
}
