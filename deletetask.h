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

private slots:
    void on_btnFind_clicked();

    void on_btnDelete_clicked();

private:
    Ui::DeleteTask *ui;
};

#endif // DELETETASK_H
