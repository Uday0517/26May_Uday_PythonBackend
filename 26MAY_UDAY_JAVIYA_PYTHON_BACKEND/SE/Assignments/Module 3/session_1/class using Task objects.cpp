#include <iostream>
#include <string>
#include <vector>
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

class TaskList {
private:
    vector<Task> tasks;

public:
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        if (index < 0 || index >= (int)tasks.size()) {
            cout << "Invalid index!\n";
            return;
        }
        tasks[index].markDone();
    }

    void showTasks() {
        for (int i = 0; i < (int)tasks.size(); i++) {
            cout << i << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList myList;

    myList.addTask("Write project proposal");
    myList.addTask("Review pull requests");
    myList.addTask("Prepare presentation slides");

    myList.markTaskDone(0);

    myList.showTasks();
    return 0;
}
