#ifndef GETTASK_H
#define GETTASK_H

#include <QDialog>

namespace Ui {
class GetTask;
}

class GetTask : public QDialog
{
    Q_OBJECT

public:
    explicit GetTask(QWidget *parent = nullptr);
    ~GetTask();

private slots:
    void on_btnFind_clicked();

private:
    Ui::GetTask *ui;
};

#endif // GETTASK_H
