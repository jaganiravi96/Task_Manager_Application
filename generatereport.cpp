#include "generatereport.h"
#include "ui_generatereport.h"

GenerateReport::GenerateReport(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GenerateReport)
{
    ui->setupUi(this);
}

GenerateReport::~GenerateReport()
{
    delete ui;
}
