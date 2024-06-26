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

void Task::setTaskId(long int &tId)
{
    taskId = tId;
}

long int Task::getTaskId()
{
    return taskId;
}

void Task::setTitle(string &tl)
{
    title = tl;
}

string Task::getTitle()
{
    return title;
}

void Task::setDescription(string &desc)
{
    description = desc;
}

string Task::getDescription()
{
    return description;
}

void Task::setDueDate(time_t &dd)
{
    dueDate = dd;
}

time_t Task::getDueDate()
{
    return dueDate;
}

void Task::setPriority(string &pr)
{
    priority = pr;
}

string Task::getPriority()
{
    return priority;
}

void Task::setStatus(string &sts)
{
    status = sts;
}

string Task::getStatus()
{
    return status;
}

void Task::setAssignee(string &asgn)
{
    assignee = asgn;
}

string Task::getAssignee()
{
    return assignee;
}
