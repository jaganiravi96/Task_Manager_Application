#include "updatetask.h"
#include "src/Model/task.h"
#include "src/Service/strutils.h"
#include "src/Service/taskservice.h"
#include "ui_updatetask.h"

UpdateTask::UpdateTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateTask)
{
    ui->setupUi(this);
}

UpdateTask::~UpdateTask()
{
    delete ui;
}

void UpdateTask::on_btnFind_clicked()
{
    qDebug()<<"in UpdateTask::on_btnFind_clicked()";

    QString taskId = ui->txtTaskIdFind->text();


    if(taskId.isEmpty() && taskId.isNull())
    {
        qDebug() << "taskId is Empty";
        ui->txtStatus->setText("Please Provide Valid Task Id!");
    }
    else
    {
        long int id = taskId.toULongLong();
        taskService taskservice;
        Task task = taskservice.getTask(id);
        ui->txtTaskIdValue->setText(taskId);
        ui->txtTitleValue->setText(QString::fromStdString(task.getTitle()));
        ui->txtDescriptionValue->setPlainText(QString::fromStdString(task.getDescription()));
        ui->dtDueDateValue->setDateTime(QDateTime::fromSecsSinceEpoch(task.getDueDate()));
        ui->txtPriorityValue->setText(QString::fromStdString(task.getPriority()));
        ui->txtStatusValue->setText(QString::fromStdString(task.getStatus()));
        ui->txtAssigneeValue->setText(QString::fromStdString(task.getAssignee()));
    }

}


void UpdateTask::on_btnUpdate_clicked()
{
    qDebug()<<"in UpdateTask:: on_btnUpdate_clicked()";

    QString taskId           = ui->txtTaskIdValue->text();
    QString sTitle           = ui->txtTitleValue->text();
    QString sDescription     = ui->txtDescriptionValue->toPlainText();
    QDateTime sDateTime      = ui->dtDueDateValue->dateTime();
    QString sPriority        = ui->txtPriorityValue->text();
    QString sStatus          = ui->txtStatusValue->text();
    QString sAssignee        = ui->txtAssigneeValue->text();

    long int task_id =  stoll(taskId.toUtf8().constData());

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
        task.setTaskId(task_id);
        qDebug() << "here TaskID : " << task.getTaskId() << " | Title : " << task.getTitle() << " | Description : " << task.getDescription()
                 << " | DueDate " << ut.timeToStr(task.getDueDate()) << " | Priority :" << task.getPriority()
                 << " | Status :" << task.getStatus() << " | Assignee :" << task.getAssignee();
        taskService taskservice;
        taskservice.updateTask(task);
        resetAllElements();
        ui->txtStatus->setText("Task Updated Successfully!");
    }
}

void UpdateTask::resetAllElements()
{
    qDebug() << "in UpdateTask:: resetAllElements()";
    ui->txtTaskIdValue->clear();
    ui->txtTitleValue->clear();
    ui->txtDescriptionValue->clear();
    ui->dtDueDateValue->clear();
    ui ->txtPriorityValue->clear();
    ui->txtStatusValue->clear();
    ui->txtAssigneeValue->clear();
}

