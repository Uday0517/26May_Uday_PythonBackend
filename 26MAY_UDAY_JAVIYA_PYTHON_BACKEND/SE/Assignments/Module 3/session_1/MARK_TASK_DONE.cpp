#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS = 5;
string tasks[MAX_TASKS];
int taskCount = 0;

void addTask(string title) {
    if (taskCount < MAX_TASKS) {
        tasks[taskCount] = title;
        taskCount++;
    } else {
        cout << "Task list full!\n";
    }
}

void printTasks() {
    for (int i = 0; i < taskCount; i++) {
        cout << i << ". " << tasks[i] << "\n";
    }
}

void markTaskDone(int index) {
    if (index < 0 || index >= taskCount) {
        cout << "Invalid index!\n";
        return;
    }
    tasks[index] += " - DONE";
}

int main() {
    addTask("Buy groceries");
    addTask("Finish report");
    addTask("Clean the house");

    cout << "Before:\n";
    printTasks();

    markTaskDone(1);

    cout << "\nAfter:\n";
    printTasks();
    return 0;
}
