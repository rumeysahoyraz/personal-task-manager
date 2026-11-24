#include "Task.h"

Task::Task(int id, const string& title, const string& description, bool isCompleted = false): id(id), title(title), description(description), isCompleted(isCompleted){}

int Task::getId() const{
    return id;
}

string Task::getTitle() const{
    return title;
}

string Task::getDescription() const{
    return description;
}

bool Task::getStatus() const{
    return isCompleted;
}

void Task::setTitle(const string& newTitle){
    title = newTitle;
}

void Task::setDescription(const string& newDescription){
    description = newDescription;
}

void Task::markAsCompleted(){
    isCompleted = true;
}

void Task::displayTask() const{
    cout << "\n---------------------------------\n";
    cout << id << "- " << title << ": " << description;
    if(isCompleted){
        cout << "\nTask is completed";
    }else{
        cout << "\nTask is not completed";
    }
    cout << "\n---------------------------------\n";
}

Task::~Task(){

}