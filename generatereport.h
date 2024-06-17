#ifndef GENERATEREPORT_H
#define GENERATEREPORT_H

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

private:
    Ui::GenerateReport *ui;
};

#endif // GENERATEREPORT_H
