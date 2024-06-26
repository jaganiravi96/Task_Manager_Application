#include "taskqtmodel.h"
#include "idsequence.h"

TaskQtModel::TaskQtModel(const QString tl, const QString desc, time_t dd, const QString pr, const QString sts, const QString asgn)
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

long int TaskQtModel::getTaskId() const
{
    return taskId;
}

QString TaskQtModel::getTitle() const
{
    return title;
}

QString TaskQtModel::getDescription() const
{
    return description;
}

time_t TaskQtModel::getDueDate() const
{
    return dueDate;
}

QString TaskQtModel::getPriority() const
{
    return priority;
}

QString TaskQtModel::getStatus() const
{
    return status;
}

QString TaskQtModel::getAssignee() const
{
    return assignee;
}
