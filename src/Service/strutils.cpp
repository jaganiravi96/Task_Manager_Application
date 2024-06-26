#include <iostream>
#include <fstream>
#include <ctime>
#include <list>
#include <time.h>
#include <iomanip>
#include <sstream>

#include "../Model/task.h"
#include "strutils.h"

using namespace std;

// Get current date/time string, format is YYYY_MM_DD
string strUtils::currentDateTime()
{
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
    return buf;
}

// Get String time to time_t type
time_t strUtils::strToTime(string stime)
{
    struct tm tm;
    std::istringstream iss(stime);
    iss >> get_time(&tm, "%Y-%m-%d %H:%M:%S");
    time_t time = mktime(&tm);
    return time;
}

// Get time_t to string time
string strUtils::timeToStr(time_t t)
{
    std::tm *ptm = std::localtime(&t);
    char buffer[32];
    std::strftime(buffer, 32, "%Y-%m-%d %H:%M:%S", ptm);
    return buffer;
}

// Get Task_id to string date
string strUtils::taskIdToStrDate(int TaskId)
{
    string strDate;
    istringstream ss(timeToStr(TaskId));
    ss >> strDate;
    return strDate;
}

// Function to generate date strings for a given date range
list<string> strUtils::generateDateStrings(string startDateStr, string endDateStr)
{
    // Convert input date strings to time_t objects
    tm start_tm = {};
    tm end_tm = {};
    list<string> listDate = {};

    istringstream startDateStream(startDateStr);
    startDateStream >> get_time(&start_tm, "%Y-%m-%d");

    istringstream endDateStream(endDateStr);
    endDateStream >> get_time(&end_tm, "%Y-%m-%d");

    time_t start_time = mktime(&start_tm);
    time_t end_time = mktime(&end_tm);

    // Calculate the difference in seconds between start and end time
    double seconds_difference = difftime(end_time, start_time);

    // Calculate the number of days in the date range
    int days_difference = seconds_difference / (60 * 60 * 24);

    // Generate and print date strings for each date in the range
    for (int i = 0; i <= days_difference; ++i)
    {
        tm current_tm = *localtime(&start_time);
        ostringstream oss;
        oss << put_time(&current_tm, "%Y-%m-%d");
        listDate.push_front(oss.str());

        // Increment the time for the next date
        start_time += 24 * 60 * 60; // Add 1 day in seconds
    }
    return listDate;
}

// To remove line from the file for given taskId
void strUtils::eraseFileLine(string path, int taskId)
{
    string line;
    ifstream fin;

    fin.open(path);
    // contents of path must be copied to a temp file then
    // renamed back to the path file
    ofstream temp;
    temp.open("temp.txt");

    while (getline(fin, line))
    {
        // write all lines to temp other than the line marked for erasing
        if (line.find(to_string(taskId)) == std::string::npos)
            temp << line << std::endl;
    }

    temp.close();
    fin.close();

    // required conversion for remove and rename functions
    const char *p = path.c_str();
    remove(p);
    rename("temp.txt", p);
}

// To replace line from the file for given taskId
string strUtils::replaceFileLine(string path, int taskId, string newline)
{
    string line;
    ifstream fin;

    fin.open(path);
    // contents of path must be copied to a temp file then
    // renamed back to the path file
    ofstream temp;
    temp.open("temp.txt");

    while (getline(fin, line))
    {
        // write all lines to temp and replace the line marked
        if (line.find(to_string(taskId)) == std::string::npos)
        {
            cout << "copied line"+ line + "\n";
            temp << line << std::endl;
        }
        else
        {
            temp << newline << std::endl;
        }
    }

    temp.close();
    fin.close();

    // required conversion for remove and rename functions
    const char *p = path.c_str();
    remove(p);
    rename("temp.txt", p);
    return "updated";
}

// Convert Task Object to String Task line
string strUtils::convertTaskToStr(Task t)
{
    string str;
    str = to_string(t.getTaskId()) + "," + t.getTitle() + "," + t.getDescription() + "," + t.getStatus() + "," + timeToStr(t.getDueDate()) + "," +
          t.getPriority() + "," + t.getAssignee();
    return str;
}

// Convert String Task line to Task Object
Task strUtils::convertStrToTask(string taskStr)
{
    Task t;
    istringstream istr(taskStr);
    string str;
    long int taskId;

    cout << taskStr + "\n";

    getline(istr, str, ',');
    taskId = stol(str);
    t.setTaskId(taskId);

    getline(istr, str, ',');
    t.setTitle(str);

    getline(istr, str, ',');
    t.setDescription(str);

    getline(istr, str, ',');
    t.setStatus(str);

    getline(istr, str, ',');
    time_t task_time = strToTime(str);
    t.setDueDate(task_time);

    getline(istr, str, ',');
    t.setPriority(str);

    getline(istr, str, ',');
    t.setAssignee(str);

    return t;
}
