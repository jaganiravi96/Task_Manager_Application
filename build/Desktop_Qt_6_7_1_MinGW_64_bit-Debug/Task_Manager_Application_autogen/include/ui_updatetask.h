/********************************************************************************
** Form generated from reading UI file 'updatetask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATETASK_H
#define UI_UPDATETASK_H

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

class Ui_UpdateTask
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txtTitleValue;
    QTextEdit *txtDescriptionValue;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *txtPriorityValue;
    QLineEdit *txtAssigneeValue;
    QLineEdit *txtStatusValue;
    QLineEdit *txtTaskIdValue;
    QDateTimeEdit *dtDueDateValue;
    QLabel *label;
    QPushButton *btnFind;
    QLineEdit *txtTaskIdFind;
    QPushButton *btnUpdate;
    QLabel *txtStatus;

    void setupUi(QDialog *UpdateTask)
    {
        if (UpdateTask->objectName().isEmpty())
            UpdateTask->setObjectName("UpdateTask");
        UpdateTask->resize(400, 500);
        UpdateTask->setMaximumSize(QSize(400, 500));
        formLayoutWidget = new QWidget(UpdateTask);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 50, 341, 361));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtTitleValue = new QLineEdit(formLayoutWidget);
        txtTitleValue->setObjectName("txtTitleValue");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtTitleValue);

        txtDescriptionValue = new QTextEdit(formLayoutWidget);
        txtDescriptionValue->setObjectName("txtDescriptionValue");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDescriptionValue);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        txtPriorityValue = new QLineEdit(formLayoutWidget);
        txtPriorityValue->setObjectName("txtPriorityValue");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtPriorityValue);

        txtAssigneeValue = new QLineEdit(formLayoutWidget);
        txtAssigneeValue->setObjectName("txtAssigneeValue");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtAssigneeValue);

        txtStatusValue = new QLineEdit(formLayoutWidget);
        txtStatusValue->setObjectName("txtStatusValue");

        formLayout->setWidget(6, QFormLayout::FieldRole, txtStatusValue);

        txtTaskIdValue = new QLineEdit(formLayoutWidget);
        txtTaskIdValue->setObjectName("txtTaskIdValue");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtTaskIdValue);

        dtDueDateValue = new QDateTimeEdit(formLayoutWidget);
        dtDueDateValue->setObjectName("dtDueDateValue");

        formLayout->setWidget(3, QFormLayout::FieldRole, dtDueDateValue);

        label = new QLabel(UpdateTask);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 51, 31));
        btnFind = new QPushButton(UpdateTask);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(260, 10, 81, 31));
        txtTaskIdFind = new QLineEdit(UpdateTask);
        txtTaskIdFind->setObjectName("txtTaskIdFind");
        txtTaskIdFind->setGeometry(QRect(100, 10, 131, 28));
        btnUpdate = new QPushButton(UpdateTask);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(150, 420, 81, 31));
        txtStatus = new QLabel(UpdateTask);
        txtStatus->setObjectName("txtStatus");
        txtStatus->setGeometry(QRect(112, 460, 151, 31));

        retranslateUi(UpdateTask);

        QMetaObject::connectSlotsByName(UpdateTask);
    } // setupUi

    void retranslateUi(QDialog *UpdateTask)
    {
        UpdateTask->setWindowTitle(QCoreApplication::translate("UpdateTask", "Update Task", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateTask", "Task Id", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateTask", "Title", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateTask", "Description", nullptr));
        label_6->setText(QCoreApplication::translate("UpdateTask", "Due Date", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateTask", "Priority", nullptr));
        label_7->setText(QCoreApplication::translate("UpdateTask", "Status", nullptr));
        label_8->setText(QCoreApplication::translate("UpdateTask", "Assignee", nullptr));
        label->setText(QCoreApplication::translate("UpdateTask", "Task Id", nullptr));
        btnFind->setText(QCoreApplication::translate("UpdateTask", "Find", nullptr));
        btnUpdate->setText(QCoreApplication::translate("UpdateTask", "Update", nullptr));
        txtStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateTask: public Ui_UpdateTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATETASK_H
