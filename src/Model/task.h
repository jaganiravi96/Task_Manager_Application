#ifndef TASK_H
#define TASK_H

#include <string>

#include "IdSequence.h"

using namespace std;

class Task
{
public:
    IdSequence i;
    Task();
    Task(string title, string desc, time_t dd, string sts);

    void setTaskId(long int &taskId);

    long int getTaskId();

    void setTitle(string &title);

    string getTitle();

    void setDescription(string &description);

    string getDescription();

    void setDueDate(time_t &dueDate);

    time_t getDueDate();

    void setStatus(string &status);

    string getStatus();
};

#endif // TASK_H
