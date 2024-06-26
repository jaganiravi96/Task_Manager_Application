#ifndef GENERATEREPORT_H
#define GENERATEREPORT_H

#include "src/Model/task.h"
#include <QDialog>

namespace Ui {
class GenerateReport;
}

class GenerateReport : public QDialog
{
    Q_OBJECT

public:
    explicit GenerateReport(QWidget *parent = nullptr);
    ~GenerateReport();

private slots:
    void on_btnGenerateReport_clicked();

    void on_btnReset_clicked();

    bool saveListToFile(const std::list<Task>& list, const std::string& filePath);


private:
    Ui::GenerateReport *ui;
};

#endif // GENERATEREPORT_H
