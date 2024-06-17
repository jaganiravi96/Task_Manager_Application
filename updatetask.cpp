#include "updatetask.h"
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
