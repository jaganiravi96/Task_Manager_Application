/********************************************************************************
** Form generated from reading UI file 'deletetask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETASK_H
#define UI_DELETETASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteTask
{
public:
    QLabel *label;
    QLineEdit *txtTaskIdDelete;
    QPushButton *btnFind;
    QPushButton *btnDelete;
    QLabel *tstStatus;
    QTableWidget *tableWidget;

    void setupUi(QDialog *DeleteTask)
    {
        if (DeleteTask->objectName().isEmpty())
            DeleteTask->setObjectName("DeleteTask");
        DeleteTask->resize(500, 400);
        DeleteTask->setMaximumSize(QSize(500, 400));
        label = new QLabel(DeleteTask);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 63, 20));
        txtTaskIdDelete = new QLineEdit(DeleteTask);
        txtTaskIdDelete->setObjectName("txtTaskIdDelete");
        txtTaskIdDelete->setGeometry(QRect(100, 20, 171, 28));
        btnFind = new QPushButton(DeleteTask);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(300, 20, 83, 29));
        btnDelete = new QPushButton(DeleteTask);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(190, 320, 83, 29));
        tstStatus = new QLabel(DeleteTask);
        tstStatus->setObjectName("tstStatus");
        tstStatus->setGeometry(QRect(90, 360, 301, 20));
        tableWidget = new QTableWidget(DeleteTask);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 60, 461, 251));

        retranslateUi(DeleteTask);

        QMetaObject::connectSlotsByName(DeleteTask);
    } // setupUi

    void retranslateUi(QDialog *DeleteTask)
    {
        DeleteTask->setWindowTitle(QCoreApplication::translate("DeleteTask", "Delete Task", nullptr));
        label->setText(QCoreApplication::translate("DeleteTask", "Task Id :", nullptr));
        btnFind->setText(QCoreApplication::translate("DeleteTask", "Find", nullptr));
        btnDelete->setText(QCoreApplication::translate("DeleteTask", "Delete", nullptr));
        tstStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeleteTask: public Ui_DeleteTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETASK_H
