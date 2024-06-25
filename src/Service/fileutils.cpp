#include <iostream>
#include <fstream>
#include <list>

#include "../Model/task.h"
#include "fileutils.h"
#include "strutils.h"

fileUtils::fileUtils() {}
strUtils ut;
string file_path = "E:\\C++_Project\\QT_Project\\Task_Manager_Application\\src\\Repository";

void fileUtils::writeRecord(string filetext)
{
    ofstream outputFile;

    string file_name = file_path + "\\task_record_" + ut.currentDateTime() + ".txt";

    outputFile.open(file_name, std::ios::app);
    if (outputFile.is_open())
    {
        outputFile << filetext + "\n";
        outputFile.close();
    }
    else
    {
        cerr << "Error opening file\n";
    }
    return;
}

Task fileUtils::getRecord(int TaskId)
{
    string date = ut.taskIdToStrDate(TaskId);
    string file_name = file_path + "\\task_record_" + date + ".txt";

    string myText;
    Task t;

    ifstream MyReadFile(file_name);

    while (getline(MyReadFile, myText))
    {
        if (myText.find(to_string(TaskId)) != std::string::npos)
        {
            t = ut.convertStrToTask(myText);
        }
    }
    MyReadFile.close();
    return t;
}

list<Task> fileUtils::getFileRecord(string date)
{
    string file_name = file_path + "\\task_record_" + date + ".txt";

    string myText;
    Task t;
    list<Task> task_list = {};

    ifstream MyReadFile(file_name);

    while (getline(MyReadFile, myText))
    {
        t = ut.convertStrToTask(myText);
        task_list.push_front(t);
    }
    MyReadFile.close();
    return task_list;
}

list<Task> fileUtils::readAllRecord(string from_date, string to_date, string specific_date)
{
    list<string> listDate = {};
    list<Task> listRecords = {};
    if (from_date != "" && to_date != "")
    {
        listDate = ut.generateDateStrings(from_date, to_date);
    }
    else
    {
        listDate.push_front(ut.currentDateTime());
    }

    for (string d : listDate)
    {
        listRecords.splice(listRecords.end(), getFileRecord(d));
    }
    return listRecords;
}

void fileUtils::deleteRecord(int TaskId, string date)
{
    string file_name = file_path + "\\task_record_" + date + ".txt";
    ut.eraseFileLine(file_name, TaskId);
}

void fileUtils::updateRecord(int TaskId, string date, Task t)
{
    string file_name = file_path + "\\task_record_" + date + ".txt";
    string newline;
    newline = ut.convertTaskToStr(t);
    ut.replaceFileLine(file_name, TaskId, newline);
}
