#include "deletetask.h"
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
