#ifndef TASKSERVICE_H
#define TASKSERVICE_H

#include <string>
#include "../Model/task.h"

class taskService
{
public:
    taskService();

    void addTask(Task t);

    void displayAllTask(string from_date = "", string to_date = "", string specific_date = "");

    void getTask(int TaskId);

    void deleteTask(int TaskId);

    void updateTask(Task t);
};

#endif // TASKSERVICE_H
