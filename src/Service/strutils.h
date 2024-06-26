#ifndef STRUTILS_H
#define STRUTILS_H

#include <string>
#include <ctime>
#include <list>
#include <time.h>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "../Model/task.h"

class strUtils
{
public:
    string currentDateTime();

    time_t strToTime(string stime);

    string timeToStr(time_t t);

    string taskIdToStrDate(int TaskId);

    list<string> generateDateStrings(string startDateStr, string endDateStr);

    void eraseFileLine(string path, int taskId);

    string replaceFileLine(std::string file_path, std::string path, int taskId, string newline);

    string convertTaskToStr(Task t);

    Task convertStrToTask(string taskStr);

    std::string getDateOneMonthAgo();
};

#endif // STRUTILS_H
