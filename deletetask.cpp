#include "deletetask.h"
#include "src/Model/task.h"
#include "src/Service/strutils.h"
#include "src/Service/taskservice.h"
#include "src/Model/taskqtmodel.h"
#include "src/Model/tasktablemodel.h"
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

        Tasktablemodel model;
        qDebug() << "model object created";

        model.addTask(t);
        ui->tableViewDelete->setModel(&model);
        ui->tableViewDelete->show();
        ui->tstStatus->setText("Task Deleted Successfully!");
    }
}


void DeleteTask::on_btnDelete_clicked()
{

}

// void DeleteTask::resetAllElements()
// {
//     qDebug() << "in AddTask:: resetAllElements()";
//     ui->txtTitle->clear();
//     ui->txtDescription->clear();
//     ui->dtDueDate->clear();
//     ui ->txtPriority->clear();
//     ui->txtStatus->clear();
//     ui->txtAssignee->clear();
// }

