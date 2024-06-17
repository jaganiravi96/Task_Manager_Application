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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_GenerateReport
{
public:
    QTableView *tableView;

    void setupUi(QDialog *GenerateReport)
    {
        if (GenerateReport->objectName().isEmpty())
            GenerateReport->setObjectName("GenerateReport");
        GenerateReport->resize(400, 300);
        GenerateReport->setMaximumSize(QSize(400, 300));
        tableView = new QTableView(GenerateReport);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 371, 271));

        retranslateUi(GenerateReport);

        QMetaObject::connectSlotsByName(GenerateReport);
    } // setupUi

    void retranslateUi(QDialog *GenerateReport)
    {
        GenerateReport->setWindowTitle(QCoreApplication::translate("GenerateReport", "Generate Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenerateReport: public Ui_GenerateReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEREPORT_H
