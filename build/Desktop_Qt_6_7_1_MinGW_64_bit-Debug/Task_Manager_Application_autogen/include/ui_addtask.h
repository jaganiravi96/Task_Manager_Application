/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTask
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtTitle;
    QLabel *label_5;
    QTextEdit *txtDescription;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *txtPriority;
    QLabel *label_3;
    QLineEdit *txtStatus;
    QLabel *label_4;
    QLineEdit *txtAssignee;
    QDateTimeEdit *dtDueDate;
    QPushButton *btnReset;
    QPushButton *btnSave;
    QLabel *txtStatus_2;

    void setupUi(QDialog *AddTask)
    {
        if (AddTask->objectName().isEmpty())
            AddTask->setObjectName("AddTask");
        AddTask->resize(400, 400);
        AddTask->setMaximumSize(QSize(400, 400));
        formLayoutWidget = new QWidget(AddTask);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 321, 299));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtTitle = new QLineEdit(formLayoutWidget);
        txtTitle->setObjectName("txtTitle");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtTitle);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        txtPriority = new QLineEdit(formLayoutWidget);
        txtPriority->setObjectName("txtPriority");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPriority);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        txtStatus = new QLineEdit(formLayoutWidget);
        txtStatus->setObjectName("txtStatus");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtStatus);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        txtAssignee = new QLineEdit(formLayoutWidget);
        txtAssignee->setObjectName("txtAssignee");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtAssignee);

        dtDueDate = new QDateTimeEdit(formLayoutWidget);
        dtDueDate->setObjectName("dtDueDate");

        formLayout->setWidget(2, QFormLayout::FieldRole, dtDueDate);

        btnReset = new QPushButton(AddTask);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(90, 330, 83, 29));
        btnSave = new QPushButton(AddTask);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(210, 330, 83, 29));
        txtStatus_2 = new QLabel(AddTask);
        txtStatus_2->setObjectName("txtStatus_2");
        txtStatus_2->setGeometry(QRect(90, 370, 211, 20));

        retranslateUi(AddTask);

        QMetaObject::connectSlotsByName(AddTask);
    } // setupUi

    void retranslateUi(QDialog *AddTask)
    {
        AddTask->setWindowTitle(QCoreApplication::translate("AddTask", "Add Task", nullptr));
        label->setText(QCoreApplication::translate("AddTask", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("AddTask", "Description", nullptr));
        label_2->setText(QCoreApplication::translate("AddTask", "Due Date", nullptr));
        label_6->setText(QCoreApplication::translate("AddTask", "Priority", nullptr));
        label_3->setText(QCoreApplication::translate("AddTask", "Status", nullptr));
        label_4->setText(QCoreApplication::translate("AddTask", "Assignee", nullptr));
        btnReset->setText(QCoreApplication::translate("AddTask", "Reset", nullptr));
        btnSave->setText(QCoreApplication::translate("AddTask", "Save", nullptr));
        txtStatus_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddTask: public Ui_AddTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
