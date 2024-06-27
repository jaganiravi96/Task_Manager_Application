#ifndef TASKSERVICE_H
#define TASKSERVICE_H

#include <string>
#include <list>
#include "../Model/task.h"

class taskService
{
public:
    taskService();

    string addTask(Task t);

    list<Task> displayAllTask(string from_date = "", string to_date = "");

    list<Task> displayAllTask(string specific_date, int count);

    Task getTask(int TaskId);

    void deleteTask(int TaskId);

    void updateTask(Task t);

    list<string> getAllFilePaths(string directory);
};

#endif // TASKSERVICE_H
