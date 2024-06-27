#include <iostream>
#include <list>
#include <filesystem>

#include "../Model/task.h"
#include "../Service/fileutils.h"
#include "../Service/strutils.h"
#include "taskservice.h"

using namespace std;


taskService::taskService() {}
fileUtils fileutil;
strUtils strutil;
namespace fs = std::filesystem;

string taskService::addTask(Task t)
{
    cout << "\n ###### In addTask() ###### \n";
    string record = strutil.convertTaskToStr(t);
    fileutil.writeRecord(record);
    return "true";
}

list<Task> taskService::displayAllTask(string from_date, string to_date)
{
    cout << "\n ###### In displayTasks() ###### \n";
    list<Task> task_list = fileutil.readAllRecord(from_date, to_date, "");

    for (Task task : task_list)
    {
        cout << "TaskID : " << task.getTaskId() << " | Title : " << task.getTitle() << " | Description : " << task.getDescription()
        << " | DueDate " << strutil.timeToStr(task.getDueDate()) << " | Priority :" << task.getPriority()
        << " | Status :" << task.getStatus() << " | Assignee :" << task.getAssignee();
        cout << endl;
    }
    cout << endl;
    return task_list;
}

list<Task> taskService::displayAllTask(string specific_date, int count)
{
    cout << "\n ###### In displayTasks() ###### \n";
    list<Task> task_list = fileutil.readAllRecord("", "", specific_date);

    int temp = 0;
    std::list<Task> limitedTasks;

    for (auto it = task_list.begin(); it != task_list.end() && temp < count; ++it, ++temp) {
        limitedTasks.push_back(*it);
    }

    cout << endl;
    return limitedTasks;
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

list<string> taskService::getAllFilePaths(string directory)
{
    list<string> filePaths;
    // Iterate through the directory
    for (const auto& entry : fs::directory_iterator(directory)) {
        // Check if it's a regular file
        if (entry.is_regular_file()) {
            // Add absolute file path to the list
            filePaths.push_back(entry.path().string());
        }
    }
    return filePaths;
}





