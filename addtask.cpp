#include "addtask.h"
#include "src/Model/task.h"
#include "src/Service/strutils.h"
#include "src/Service/taskservice.h"
#include "ui_addtask.h"

AddTask::AddTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddTask)
{
    ui->setupUi(this);
}

AddTask::~AddTask()
{
    delete ui;
}

void AddTask::on_btnSave_clicked()
{
    qDebug()<<"in AddTask:: on_btnSave_clicked()";

    QString sTitle           = ui->txtTitle->text();
    QString sDescription     = ui->txtDescription->toPlainText();
    QDateTime sDateTime      = ui->dtDueDate->dateTime();
    QString sPriority        = ui->txtPriority->text();
    QString sStatus          = ui->txtStatus->text();
    QString sAssignee        = ui->txtAssignee->text();

    if(sTitle.isEmpty() && sDateTime.isNull())
    {
        qDebug() << "Title and Due Date is Empty";
        ui->txtStatus->setText("Please Provide Valid Details!");
    }
    else
    {
        qDebug() << "read was successful : Title" << sTitle.toUtf8().constData();
        strUtils ut;
        time_t temp =  ut.strToTime(sDateTime.toString("yyyy-MM-dd hh:mm:ss").toStdString());
        Task task(sTitle.toUtf8().constData(), sDescription.toUtf8().constData(), temp, sPriority.toUtf8().constData(),
                  sStatus.toUtf8().constData(), sAssignee.toUtf8().constData());
        qDebug() << "TaskID : " << task.getTaskId() << " | Title : " << task.getTitle() << " | Description : " << task.getDescription()
                 << " | DueDate " << ut.timeToStr(task.getDueDate()) << " | Priority :" << task.getPriority()
                 << " | Status :" << task.getStatus() << " | Assignee :" << task.getAssignee();
        taskService taskservice;
        taskservice.addTask(task);
        resetAllElements();
        ui->txtStatus_2->setText("Task Added Successfully!");
    }
}


void AddTask::on_btnReset_clicked()
{
    qDebug() << "in AddTask:: on_btnReset_clicked()";
    resetAllElements();
}

void AddTask::resetAllElements()
{
    qDebug() << "in AddTask:: resetAllElements()";
    ui->txtTitle->clear();
    ui->txtDescription->clear();
    ui->dtDueDate->clear();
    ui ->txtPriority->clear();
    ui->txtStatus->clear();
    ui->txtAssignee->clear();
}

