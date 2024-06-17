#ifndef DELETETASK_H
#define DELETETASK_H

#include <QDialog>

namespace Ui {
class DeleteTask;
}

class DeleteTask : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteTask(QWidget *parent = nullptr);
    ~DeleteTask();

private:
    Ui::DeleteTask *ui;
};

#endif // DELETETASK_H
