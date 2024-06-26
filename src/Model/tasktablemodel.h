#ifndef TASKTABLEMODEL_H
#define TASKTABLEMODEL_H

#include <QAbstractTableModel>
#include <QVector>
#include "task.h"

class Tasktablemodel : public QAbstractTableModel {
    Q_OBJECT

public:
    explicit Tasktablemodel(QObject *parent = nullptr);
    ~Tasktablemodel();

    // Implementing methods from QAbstractTableModel
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Additional methods for managing data
    void addTask(Task &taskqm);
    void removeTask(int row);

private:
    QVector<Task> tasks;
};

#endif // TASKTABLEMODEL_H
