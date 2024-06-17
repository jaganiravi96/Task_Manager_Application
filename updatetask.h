#ifndef UPDATETASK_H
#define UPDATETASK_H

#include <QDialog>

namespace Ui {
class UpdateTask;
}

class UpdateTask : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateTask(QWidget *parent = nullptr);
    ~UpdateTask();

private:
    Ui::UpdateTask *ui;
};

#endif // UPDATETASK_H
