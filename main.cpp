#include <iostream>
#include "Task.h"

using namespace std;

int main() {

    // Create a Task object
    Task task;

    task.setTitle("Learn C++");
    task.setDescription("Study Object Oriented Programming");

    cout << "TASK INFORMATION\n";
    task.displayTask();

    cout << "\nTask status: ";

    if (task.getStatus()) {
        cout << "Completed";
    }
    else {
        cout << "Incomplete";
    }

    task.markAsCompleted();

    cout << "\n\nAFTER COMPLETION\n";
    task.displayTask();

    cout << "\n\n";

    return 0;
}