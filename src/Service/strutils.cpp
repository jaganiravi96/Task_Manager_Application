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

string strUtils::replaceFileLine(string file_path, string path, int taskId, string newline)
{
    std::string line;
    std::ifstream fin;

    fin.open(path);
    // contents of path must be copied to a temp file then
    // renamed back to the path file
    std::ofstream temp;
    temp.open("temp.txt");

    while (getline(fin, line))
    {
        // write all lines to temp and replace the line marked
        if (line.find(to_string(taskId)) == std::string::npos)
        {
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

// To replace line from the file for given taskId

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

string strUtils::getDateOneMonthAgo()
{
    // Get current time
    auto now = std::chrono::system_clock::now();

    // Convert to time_t (seconds since epoch)
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Get struct tm for current time
    struct std::tm* currentTm = std::localtime(&currentTime);

    // Calculate one month ago
    currentTm->tm_mon -= 1;
    if (currentTm->tm_mon < 0) {
        currentTm->tm_mon += 12;
        currentTm->tm_year -= 1;
    }

    // Convert back to time_t
    std::time_t oneMonthAgoTime = std::mktime(currentTm);

    // Get struct tm for one month ago
    struct std::tm* oneMonthAgoTm = std::localtime(&oneMonthAgoTime);

    // Format date as YYYY-MM-DD
    std::ostringstream oss;
    oss << std::put_time(oneMonthAgoTm, "%Y-%m-%d");
    return oss.str();
}
