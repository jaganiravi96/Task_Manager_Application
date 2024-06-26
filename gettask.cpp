#include "gettask.h"
#include "src/Model/task.h"
#include "src/Service/taskservice.h"
#include "ui_gettask.h"

GetTask::GetTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GetTask)
{
    ui->setupUi(this);
}

GetTask::~GetTask()
{
    delete ui;
}

void GetTask::on_btnFind_clicked()
{
    qDebug()<<"in AGetTask::on_btnFind_clicked()";

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
        ui->txtDueDateValue->setDateTime(QDateTime::fromSecsSinceEpoch(task.getDueDate()));
        ui->txtPriorityValue->setText(QString::fromStdString(task.getTitle()));
        ui->txtStatusValue->setText(QString::fromStdString(task.getTitle()));
        ui->txtAssigneeValue->setText(QString::fromStdString(task.getTitle()));
    }
}

