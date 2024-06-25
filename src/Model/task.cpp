#include "task.h"
#include "IdSequence.h"

Task::Task()
{
    IdSequence i;
    taskId = i.createTaskId();
}

Task::Task(string tl, string desc, time_t dd, string pr, string sts, string asgn)
{
    IdSequence i;
    taskId = i.createTaskId();
    title = tl;
    description = desc;
    dueDate = dd;
    priority = pr;
    status = sts;
    assignee = asgn;
}

void Task::setTaskId(long int &taskId)
{
    taskId = taskId;
}

long int Task::getTaskId()
{
    return taskId;
}

void Task::setTitle(string &title)
{
    title = title;
}

string Task::getTitle()
{
    return title;
}

void Task::setDescription(string &description)
{
    description = description;
}

string Task::getDescription()
{
    return description;
}

void Task::setDueDate(time_t &dueDate)
{
    dueDate = dueDate;
}

time_t Task::getDueDate()
{
    return dueDate;
}

void Task::setPriority(string &priority)
{
    priority = priority;
}

string Task::getPriority()
{
    return priority;
}

void Task::setStatus(string &status)
{
    status = status;
}

string Task::getStatus()
{
    return status;
}

void Task::setAssignee(string &assignee)
{
    assignee = assignee;
}

string Task::getAssignee()
{
    return assignee;
}
