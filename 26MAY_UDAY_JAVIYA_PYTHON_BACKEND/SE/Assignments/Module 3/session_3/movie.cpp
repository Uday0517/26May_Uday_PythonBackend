#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string title;
    string genre;
    double rating;

public:
    // Parameterized constructor
    Movie(string t, string g, double r)
        : title(t), genre(g), rating(r) {}

    // Copy constructor
    Movie(const Movie &other) {
        title = other.title;
        genre = other.genre;
        rating = other.rating;
        cout << "(Copy constructor called for \"" << title << "\")\n";
    }

    void displayInfo() {
        cout << "Title: " << title << ", Genre: " << genre
             << ", Rating: " << rating << "\n";
    }
};

int main() {
    Movie original("Inception", "Sci-Fi", 8.8);

    // Copy constructor invoked here
    Movie copy = original;

    cout << "\nOriginal Movie:\n";
    original.displayInfo();

    cout << "\nCopied Movie:\n";
    copy.displayInfo();

    return 0;
}
