#include "addtask.h"
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

    QString sTitle       = ui->txtTitle->text();
    QString sDescription = ui->txtDescription->toPlainText();
    QDate sDate          = ui->dtDueDate->date();
    QString sPriority    = ui ->txtPriority->text();
    QString sStatus      = ui->txtStatus->text();
    QString sAssignee    = ui->txtAssignee->text();

    if(sTitle.isEmpty() && sDate.isNull())
    {
        qDebug() << "Title and Due Date is Empty";
        ui->txtStatus->setText("Please Provide Valid Details!");
    }
    else
    {
        qDebug() << "read was successful : Tile" << sTitle << " Descro";
        resetAllElements();
        ui->txtStatus->setText("Task Added Successfully!");
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

