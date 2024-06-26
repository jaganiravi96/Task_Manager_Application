#include "generatereport.h"
#include <fstream>
#include <QFileDialog>
#include <QDebug>
#include "src/Model/task.h"
#include "src/Service/strutils.h"
#include "src/Service/taskservice.h"
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

void GenerateReport::on_btnGenerateReport_clicked()
{
    QString directoryPath = QFileDialog::getExistingDirectory(nullptr,
                                                              "Select Directory",
                                                              QDir::homePath(),
                                                              QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    strUtils ut;
    taskService taskservice;
    list<Task> task_list = taskservice.displayAllTask(ut.getDateOneMonthAgo(), ut.currentDateTime());
    saveListToFile(task_list, directoryPath.toStdString());
    ui->txtStatus->setText("Report has been saved to " + directoryPath);
}

void GenerateReport::on_btnReset_clicked()
{
    ui->txtStatus->clear();
}

bool GenerateReport::saveListToFile(const std::list<Task> &list, const std::string &filePath)
{
    string path = filePath + "\\report.doc";
    std::ofstream outputFile(path);
    if (!outputFile.is_open()) {
        qDebug() << "Error opening file: " << path;
        return false;
    }

    strUtils ut;
    for (Task task : list) {
        outputFile << "TaskID : " << task.getTaskId() << " | Title : " << task.getTitle() << " | Description : " << task.getDescription()
                   << " | DueDate " << ut.timeToStr(task.getDueDate()) << " | Priority :" << task.getPriority()
                   << " | Status :" << task.getStatus() << " | Assignee :" << task.getAssignee() << "\n \n ";
    }

    outputFile.close();
    return true;
}
