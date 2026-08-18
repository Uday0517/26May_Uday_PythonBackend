#include <iostream>
#include <string>
using namespace std;

class MusicPlayer {
public:
    virtual void play(string song) {
        cout << "Playing: " << song << "\n";
    }

    virtual ~MusicPlayer() {}
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(string song) override {
        cout << "Streaming on Spotify: " << song << "\n";
    }
};

int main() {
    MusicPlayer* player = new SpotifyPlayer();  // pointer type: MusicPlayer, object type: SpotifyPlayer
    player->play("Blinding Lights");

    delete player;
    return 0;
}
