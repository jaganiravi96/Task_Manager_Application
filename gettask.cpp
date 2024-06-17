#include "gettask.h"
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
