#include <iostream>
#include <string>
using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    Task(string t) : title(t), isDone(false) {}

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title << " [" << (isDone ? "DONE" : "PENDING") << "]\n";
    }
};

int main() {
    Task t("Write project proposal");
    t.display();
    t.markDone();
    t.display();
    return 0;
}
