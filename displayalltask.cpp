#include "displayalltask.h"
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

}


void DisplayAllTask::on_btnDisplay_2_clicked()
{

}

