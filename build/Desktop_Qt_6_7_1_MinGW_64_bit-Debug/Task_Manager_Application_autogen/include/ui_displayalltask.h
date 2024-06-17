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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DisplayAllTask
{
public:
    QDateEdit *dtToDate;
    QDateEdit *dtFromDate;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnDisplay;
    QTableView *tableView;

    void setupUi(QDialog *DisplayAllTask)
    {
        if (DisplayAllTask->objectName().isEmpty())
            DisplayAllTask->setObjectName("DisplayAllTask");
        DisplayAllTask->resize(550, 650);
        DisplayAllTask->setMaximumSize(QSize(550, 650));
        dtToDate = new QDateEdit(DisplayAllTask);
        dtToDate->setObjectName("dtToDate");
        dtToDate->setGeometry(QRect(80, 10, 131, 29));
        dtFromDate = new QDateEdit(DisplayAllTask);
        dtFromDate->setObjectName("dtFromDate");
        dtFromDate->setGeometry(QRect(300, 10, 131, 29));
        label = new QLabel(DisplayAllTask);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 63, 21));
        label_2 = new QLabel(DisplayAllTask);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 10, 81, 21));
        btnDisplay = new QPushButton(DisplayAllTask);
        btnDisplay->setObjectName("btnDisplay");
        btnDisplay->setGeometry(QRect(450, 10, 83, 29));
        tableView = new QTableView(DisplayAllTask);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 50, 511, 551));

        retranslateUi(DisplayAllTask);

        QMetaObject::connectSlotsByName(DisplayAllTask);
    } // setupUi

    void retranslateUi(QDialog *DisplayAllTask)
    {
        DisplayAllTask->setWindowTitle(QCoreApplication::translate("DisplayAllTask", "Display All Task", nullptr));
        label->setText(QCoreApplication::translate("DisplayAllTask", "To Date", nullptr));
        label_2->setText(QCoreApplication::translate("DisplayAllTask", "From Date", nullptr));
        btnDisplay->setText(QCoreApplication::translate("DisplayAllTask", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayAllTask: public Ui_DisplayAllTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYALLTASK_H
