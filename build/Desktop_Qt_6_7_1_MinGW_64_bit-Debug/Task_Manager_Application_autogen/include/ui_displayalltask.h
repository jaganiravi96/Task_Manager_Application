/********************************************************************************
** Form generated from reading UI file 'displayalltask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYALLTASK_H
#define UI_DISPLAYALLTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayAllTask
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnDisplay;
    QDateTimeEdit *dtToDate;
    QDateTimeEdit *dtFromDate;
    QPushButton *btnReset;
    QTableWidget *tableWidget;

    void setupUi(QDialog *DisplayAllTask)
    {
        if (DisplayAllTask->objectName().isEmpty())
            DisplayAllTask->setObjectName("DisplayAllTask");
        DisplayAllTask->resize(550, 650);
        DisplayAllTask->setMaximumSize(QSize(550, 650));
        label = new QLabel(DisplayAllTask);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 63, 21));
        label_2 = new QLabel(DisplayAllTask);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 81, 21));
        btnDisplay = new QPushButton(DisplayAllTask);
        btnDisplay->setObjectName("btnDisplay");
        btnDisplay->setGeometry(QRect(320, 20, 81, 41));
        dtToDate = new QDateTimeEdit(DisplayAllTask);
        dtToDate->setObjectName("dtToDate");
        dtToDate->setGeometry(QRect(100, 10, 194, 29));
        dtFromDate = new QDateTimeEdit(DisplayAllTask);
        dtFromDate->setObjectName("dtFromDate");
        dtFromDate->setGeometry(QRect(100, 50, 194, 29));
        btnReset = new QPushButton(DisplayAllTask);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(420, 20, 81, 41));
        tableWidget = new QTableWidget(DisplayAllTask);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 90, 521, 531));

        retranslateUi(DisplayAllTask);

        QMetaObject::connectSlotsByName(DisplayAllTask);
    } // setupUi

    void retranslateUi(QDialog *DisplayAllTask)
    {
        DisplayAllTask->setWindowTitle(QCoreApplication::translate("DisplayAllTask", "Display All Task", nullptr));
        label->setText(QCoreApplication::translate("DisplayAllTask", "To Date", nullptr));
        label_2->setText(QCoreApplication::translate("DisplayAllTask", "From Date", nullptr));
        btnDisplay->setText(QCoreApplication::translate("DisplayAllTask", "Display", nullptr));
        btnReset->setText(QCoreApplication::translate("DisplayAllTask", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayAllTask: public Ui_DisplayAllTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYALLTASK_H
