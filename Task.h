#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

using namespace std;

class Task{
private:
    int id;
    string title;
    string description;
    bool isCompleted = false;

public:
    int getId() const;
    string getTitle() const;
    string getDescription() const;
    bool getStatus() const;

    void setTitle(const string&);
    void setDescription(const string&);

    void markAsCompleted();

    void displayTask() const;
};

#endif