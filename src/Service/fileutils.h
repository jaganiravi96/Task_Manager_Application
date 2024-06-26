#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <string>
#include <list>
#include "../Model/task.h"

class fileUtils
{
public:
    fileUtils();

    string writeRecord(string filetext);

    Task getRecord(int TaskId);

    list<Task> getFileRecord(string date);

    list<Task> readAllRecord(string from_date = "", string to_date = "", string specific_date = "");

    void deleteRecord(int TaskId, string date);

    void updateRecord(int TaskId, string date, Task t);
};

#endif // FILEUTILS_H
