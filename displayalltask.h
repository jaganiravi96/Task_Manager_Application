#ifndef DISPLAYALLTASK_H
#define DISPLAYALLTASK_H

#include <QDialog>

namespace Ui {
class DisplayAllTask;
}

class DisplayAllTask : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayAllTask(QWidget *parent = nullptr);
    ~DisplayAllTask();

private slots:
    void on_btnDisplay_clicked();

    void on_btnReset_clicked();

private:
    Ui::DisplayAllTask *ui;
};

#endif // DISPLAYALLTASK_H
