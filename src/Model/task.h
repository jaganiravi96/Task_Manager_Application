#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task
{
private:
    long int taskId;
    string title;
    string description;
    time_t dueDate;
    string priority;
    string status;
    string assignee;

public:
    Task();

    Task(string tl, string desc, time_t dd, string pr, string sts, string asgn);

    void setTaskId(long int &taskId);

    long int getTaskId();

    void setTitle(string &title);

    string getTitle();

    void setDescription(string &desc);

    string getDescription();

    void setDueDate(time_t &dueDate);

    time_t getDueDate();

    void setPriority(string &priority);

    string getPriority();

    void setStatus(string &status);

    string getStatus();

    void setAssignee(string &assignee);

    string getAssignee();
};

#endif // TASK_H
