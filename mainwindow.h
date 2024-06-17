#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addtask.h"
#include "deletetask.h"
#include "displayalltask.h"
#include "generatereport.h"
#include "updatetask.h"
#include "gettask.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddTaskButton_clicked();

    void on_UpdateTaskButton_clicked();

    void on_DeleteTaskButton_clicked();

    void on_DisplayAllTaskButton_clicked();

    void on_GetTaskButton_clicked();

    void on_GenerateReportButton_clicked();

private:
    Ui::MainWindow *ui;
    AddTask *ptrAddTask;
    DeleteTask *ptrDeleteTask;
    DisplayAllTask *ptrDisplayAllTask;
    GenerateReport *ptrGenerateReport;
    UpdateTask *ptrUpdateTask;
    GetTask *ptrGetTask;
};
#endif // MAINWINDOW_H
