#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddTask = new AddTask();
    ptrDeleteTask = new DeleteTask();
    ptrDisplayAllTask = new DisplayAllTask();
    ptrUpdateTask = new UpdateTask();
    ptrGetTask = new GetTask();
    ptrGenerateReport = new GenerateReport();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrAddTask;
    delete ptrDeleteTask;
    delete ptrDisplayAllTask;
    delete ptrUpdateTask;
    delete ptrGetTask;
    delete ptrGenerateReport;
}

void MainWindow::on_AddTaskButton_clicked()
{
    ptrAddTask -> show();
}


void MainWindow::on_UpdateTaskButton_clicked()
{
    ptrUpdateTask -> show();
}


void MainWindow::on_DeleteTaskButton_clicked()
{
    ptrDeleteTask -> show();
}


void MainWindow::on_DisplayAllTaskButton_clicked()
{
    ptrDisplayAllTask -> show();
}


void MainWindow::on_GetTaskButton_clicked()
{
    ptrGetTask -> show();
}


void MainWindow::on_GenerateReportButton_clicked()
{
    ptrGenerateReport -> show();
}

