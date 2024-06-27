#include "displayalltask.h"
#include "src/Model/task.h"
#include "src/Service/strutils.h"
#include "src/Service/taskservice.h"
#include "ui_displayalltask.h"

DisplayAllTask::DisplayAllTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplayAllTask)
{
    ui->setupUi(this);
}

DisplayAllTask::~DisplayAllTask()
{
    delete ui;
}

void DisplayAllTask::on_btnDisplay_clicked()
{
    qDebug()<<"DisplayAllTask::on_btnDisplay_clicked";

    QDateTime fromDate     = ui->dtFromDate->dateTime();
    QDateTime toDate       = ui->dtToDate->dateTime();
    QDateTime specificDate = ui->dtSpecificDate->dateTime();

    string fromStrDate = fromDate.toString("yyyy-MM-dd").toStdString();
    string toStrDate   = toDate.toString("yyyy-MM-dd").toStdString();
    string specificStrDate   = specificDate.toString("yyyy-MM-dd").toStdString();

    qDebug() << specificStrDate;

    strUtils ut;
    taskService taskservice;
    list<Task> task_list;
    if(specificStrDate == "2000-01-01") {
        task_list = taskservice.displayAllTask(fromStrDate, toStrDate);
    }
    else{
        task_list = taskservice.displayAllTask(specificStrDate, 20);
    }


    QStringList headers;
    headers << "Task ID" << "Title" << "Description" << "Due Date" << "Priority" << "Status" << "Assignee";
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // Populate table with Task data
    ui->tableWidget->setRowCount(task_list.size()); // Adjust based on your number of tasks

    QTableWidgetItem *item;
    int i = 0;

    for(Task t : task_list)
    {
        item = new QTableWidgetItem(QString::number(t.getTaskId()));
        ui->tableWidget->setItem(i, 0, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getTitle()));
        ui->tableWidget->setItem(i, 1, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getDescription()));
        ui->tableWidget->setItem(i, 2, item);

        item = new QTableWidgetItem(QString::fromStdString(ut.timeToStr(t.getDueDate())));
        ui->tableWidget->setItem(i, 3, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getPriority()));
        ui->tableWidget->setItem(i, 4, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getStatus()));
        ui->tableWidget->setItem(i, 5, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getAssignee()));
        ui->tableWidget->setItem(i, 6, item);
        i++;
    }
    // Resize columns to fit contents
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->show();
}


void DisplayAllTask::on_btnReset_clicked()
{
    ui->tableWidget->reset();
    ui->tableWidget->clear();
    ui->dtFromDate->clear();
    ui->dtToDate->clear();
    ui->dtSpecificDate->clear();
}

