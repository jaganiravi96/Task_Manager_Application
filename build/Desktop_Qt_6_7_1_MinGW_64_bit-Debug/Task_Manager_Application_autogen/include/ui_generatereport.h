/********************************************************************************
** Form generated from reading UI file 'generatereport.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEREPORT_H
#define UI_GENERATEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_GenerateReport
{
public:
    QPushButton *btnGenerateReport;
    QPushButton *btnReset;
    QTableWidget *tableWidget;
    QLabel *txtStatus;

    void setupUi(QDialog *GenerateReport)
    {
        if (GenerateReport->objectName().isEmpty())
            GenerateReport->setObjectName("GenerateReport");
        GenerateReport->resize(400, 300);
        GenerateReport->setMaximumSize(QSize(400, 300));
        btnGenerateReport = new QPushButton(GenerateReport);
        btnGenerateReport->setObjectName("btnGenerateReport");
        btnGenerateReport->setGeometry(QRect(60, 10, 121, 29));
        btnReset = new QPushButton(GenerateReport);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(200, 10, 83, 29));
        tableWidget = new QTableWidget(GenerateReport);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 50, 371, 221));
        txtStatus = new QLabel(GenerateReport);
        txtStatus->setObjectName("txtStatus");
        txtStatus->setGeometry(QRect(70, 100, 251, 111));

        retranslateUi(GenerateReport);

        QMetaObject::connectSlotsByName(GenerateReport);
    } // setupUi

    void retranslateUi(QDialog *GenerateReport)
    {
        GenerateReport->setWindowTitle(QCoreApplication::translate("GenerateReport", "Generate Report", nullptr));
        btnGenerateReport->setText(QCoreApplication::translate("GenerateReport", "Generate Report", nullptr));
        btnReset->setText(QCoreApplication::translate("GenerateReport", "Reset", nullptr));
        txtStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GenerateReport: public Ui_GenerateReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEREPORT_H
