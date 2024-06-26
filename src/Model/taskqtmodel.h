#ifndef TASKQTMODEL_H
#define TASKQTMODEL_H

#include <QString >

class TaskQtModel
{
private:
    long int taskId;
    QString  title;
    QString  description;
    time_t dueDate;
    QString  priority;
    QString  status;
    QString  assignee;

public:
    TaskQtModel(const QString  tl, const QString  desc, time_t dd, const QString  pr, const QString  sts, const QString asgn);

    long int getTaskId() const;

    QString  getTitle() const;

    QString  getDescription() const;

    time_t getDueDate() const;

    QString getPriority() const;

    QString getStatus() const;

    QString getAssignee() const;
};

#endif // TASKQTMODEL_H
