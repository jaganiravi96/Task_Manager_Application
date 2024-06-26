#include "deletetask.h"
#include "src/Model/task.h"
#include "src/Service/strutils.h"
#include "src/Service/taskservice.h"
#include "ui_deletetask.h"


DeleteTask::DeleteTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteTask)
{
    ui->setupUi(this);
}

DeleteTask::~DeleteTask()
{
    delete ui;
}

void DeleteTask::on_btnFind_clicked()
{
    qDebug()<<"in DeleteTask::on_btnFind_clicked()";

    QString sTaskID = ui->txtTaskIdDelete->text();

    if(sTaskID.isEmpty() && sTaskID.isNull())
    {
        qDebug() << "Task ID is Empty";
        ui->tstStatus->setText("Please Provide Valid Task ID!");
    }
    else
    {
        qDebug() << "read was successful : ID" << sTaskID.toUtf8().constData();

        strUtils ut;
        taskService taskservice;

        long int temp =  stoll(sTaskID.toUtf8().constData());
        Task t = taskservice.getTask(temp);

        QStringList headers;
        headers << "Task ID" << "Title" << "Description" << "Due Date" << "Priority" << "Status" << "Assignee";
        ui->tableWidget->setColumnCount(7);
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        // Populate table with Task data
        ui->tableWidget->setRowCount(1); // Adjust based on your number of tasks

        QTableWidgetItem *item;

        item = new QTableWidgetItem(QString::number(t.getTaskId()));
        ui->tableWidget->setItem(0, 0, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getTitle()));
        ui->tableWidget->setItem(0, 1, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getDescription()));
        ui->tableWidget->setItem(0, 2, item);

        item = new QTableWidgetItem(QString::fromStdString(ut.timeToStr(t.getDueDate())));
        ui->tableWidget->setItem(0, 3, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getPriority()));
        ui->tableWidget->setItem(0, 4, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getStatus()));
        ui->tableWidget->setItem(0, 5, item);

        item = new QTableWidgetItem(QString::fromStdString(t.getAssignee()));
        ui->tableWidget->setItem(0, 6, item);

        // Resize columns to fit contents
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->show();
        ui->tstStatus->setText("Verify the Task Details before click on Delete Button");
    }
}


void DeleteTask::on_btnDelete_clicked()
{
    qDebug()<<"in DeleteTask::on_btnFind_clicked()";

    QString sTaskID = ui->txtTaskIdDelete->text();

    if(sTaskID.isEmpty() && sTaskID.isNull())
    {
        qDebug() << "Task ID is Empty";
        ui->tstStatus->setText("Please Provide Valid Task ID!");
    }
    else
    {
        qDebug() << "read was successful : ID" << sTaskID.toUtf8().constData();

        strUtils ut;
        taskService taskservice;

        long int temp =  stoll(sTaskID.toUtf8().constData());
        taskservice.deleteTask(temp);
        ui->tableWidget->removeRow(0);

        ui->tstStatus->setText("Task Deleted Successfully !!!");
    }

}

