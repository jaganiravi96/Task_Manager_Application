#ifndef ADDTASK_H
#define ADDTASK_H

#include <QDialog>

namespace Ui {
class AddTask;
}

class AddTask : public QDialog
{
    Q_OBJECT

public:
    explicit AddTask(QWidget *parent = nullptr);
    ~AddTask();

private slots:
    void on_btnSave_clicked();

    void on_btnReset_clicked();

    void resetAllElements();

private:
    Ui::AddTask *ui;
};

#endif // ADDTASK_H
