#include "tasktablemodel.h"

Tasktablemodel::Tasktablemodel(QObject *parent) : QAbstractTableModel(parent) {}

Tasktablemodel::~Tasktablemodel() {}

int Tasktablemodel::rowCount(const QModelIndex &parent) const {
    qDebug()<<"in tasktablemodel::rowCount";
    Q_UNUSED(parent);
    return tasks.size();
}

int Tasktablemodel::columnCount(const QModelIndex &parent) const {
    qDebug()<<"in tasktablemodel::columnCount";
    Q_UNUSED(parent);
    return 7; // Assuming taskId, title, description, dueDate, priority, status, assignee
}

QVariant Tasktablemodel::data(const QModelIndex &index, int role) const {
    qDebug()<<"in tasktablemodel::data";
    if (!index.isValid())
        return QVariant();

    if (index.row() >= tasks.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::DisplayRole) {
        Task task = tasks[index.row()];
        switch (index.column()) {
        case 0: return QVariant::fromValue(task.getTaskId());
        case 1: return QVariant::fromValue(task.getTitle());
        case 2: return QVariant::fromValue(task.getDescription());
        case 3: return QVariant::fromValue(task.getDueDate());
        case 4: return QVariant::fromValue(task.getPriority());
        case 5: return QVariant::fromValue(task.getStatus());
        case 6: return QVariant::fromValue(task.getAssignee());
        default: return QVariant();
        }
    }
    return QVariant();
}

QVariant Tasktablemodel::headerData(int section, Qt::Orientation orientation, int role) const {
    qDebug()<<"in tasktablemodel::headerData";
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0: return tr("Task Id");
        case 1: return tr("Title");
        case 2: return tr("Description");
        case 3: return tr("Due Date");
        case 4: return tr("Priority");
        case 5: return tr("Status");
        case 6: return tr("Assignee");
        default: return QVariant();
        }
    }

    return QVariant();
}

void Tasktablemodel::addTask(Task &task) {
    qDebug()<<"in tasktablemodel::addTask";
    qDebug()<<tasks.size();
    beginInsertRows(QModelIndex(), 1, 1);
    tasks.push_back(task);
    endInsertRows();
}

void Tasktablemodel::removeTask(int row) {
    qDebug()<<"in tasktablemodel::removeTask";
    beginRemoveRows(QModelIndex(), row, row);
    tasks.remove(row);
    endRemoveRows();
}
