#include <iostream>
#include <list>

#include "../Model/task.h"
#include "../Service/fileutils.h"
#include "../Service/strutils.h"
#include "taskservice.h"

using namespace std;


taskService::taskService() {}
fileUtils fileutil;
strUtils strutil;

void taskService::addTask(Task t)
{
    cout << "\n ###### In addTask() ###### \n";
    string record = strutil.convertTaskToStr(t);
    fileutil.writeRecord(record);
    return;
}

void taskService::displayAllTask(string from_date, string to_date, string specific_date)
{
    cout << "\n ###### In displayTasks() ###### \n";
    list<Task> task_list = fileutil.readAllRecord(from_date, to_date, specific_date);

    for (Task task : task_list)
    {
        cout << "TaskID : " << task.getTaskId() << " | Title : " << task.getTitle() << " | Description : " << task.getDescription()
        << " | DueDate " << strutil.timeToStr(task.getDueDate()) << " | Priority :" << task.getPriority()
        << " | Status :" << task.getStatus() << " | Assignee :" << task.getAssignee();
        cout << endl;
    }
    cout << endl;
}

Task taskService::getTask(int TaskId)
{
    cout << "\n ###### In getTask() ###### \n";
    Task task = fileutil.getRecord(TaskId);
    cout << "TaskID : " << task.getTaskId() << " | Title : " << task.getTitle() << " | Description : " << task.getDescription()
    << " | DueDate " << strutil.timeToStr(task.getDueDate()) << " | Priority :" << task.getPriority()
    << " | Status :" << task.getStatus() << " | Assignee :" << task.getAssignee();
    cout << endl;
    return task;
}

void taskService::deleteTask(int TaskId)
{
    cout << "\n ###### In deleteTask() ###### \n";
    fileutil.deleteRecord(TaskId, strutil.taskIdToStrDate(TaskId));
    cout << "Deleted Task with Id : " + to_string(TaskId) + "\n";
}

void taskService::updateTask(Task t)
{
    cout << "\n ###### In updateTask() ###### \n";
    long int TaskId = t.getTaskId();
    fileutil.updateRecord(TaskId, strutil.taskIdToStrDate(TaskId), t);
    cout << "Updated Task with Id :" + to_string(TaskId) + "\n";
}


