/********************************************************************************
** Form generated from reading UI file 'gettask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETTASK_H
#define UI_GETTASK_H

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

class Ui_GetTask
{
public:
    QLineEdit *txtTaskIdFind;
    QPushButton *btnFind;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txtTaskIdValue;
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
    QDateTimeEdit *txtDueDateValue;
    QLabel *txtStatus;

    void setupUi(QDialog *GetTask)
    {
        if (GetTask->objectName().isEmpty())
            GetTask->setObjectName("GetTask");
        GetTask->resize(400, 474);
        GetTask->setMaximumSize(QSize(400, 500));
        txtTaskIdFind = new QLineEdit(GetTask);
        txtTaskIdFind->setObjectName("txtTaskIdFind");
        txtTaskIdFind->setGeometry(QRect(90, 10, 131, 28));
        btnFind = new QPushButton(GetTask);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(250, 10, 81, 31));
        label = new QLabel(GetTask);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 51, 31));
        formLayoutWidget = new QWidget(GetTask);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 60, 341, 361));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtTaskIdValue = new QLineEdit(formLayoutWidget);
        txtTaskIdValue->setObjectName("txtTaskIdValue");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtTaskIdValue);

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

        txtDueDateValue = new QDateTimeEdit(formLayoutWidget);
        txtDueDateValue->setObjectName("txtDueDateValue");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtDueDateValue);

        txtStatus = new QLabel(GetTask);
        txtStatus->setObjectName("txtStatus");
        txtStatus->setGeometry(QRect(110, 430, 151, 31));

        retranslateUi(GetTask);

        QMetaObject::connectSlotsByName(GetTask);
    } // setupUi

    void retranslateUi(QDialog *GetTask)
    {
        GetTask->setWindowTitle(QCoreApplication::translate("GetTask", "Get Task", nullptr));
        btnFind->setText(QCoreApplication::translate("GetTask", "Find", nullptr));
        label->setText(QCoreApplication::translate("GetTask", "Task Id", nullptr));
        label_2->setText(QCoreApplication::translate("GetTask", "Task Id", nullptr));
        label_3->setText(QCoreApplication::translate("GetTask", "Title", nullptr));
        label_4->setText(QCoreApplication::translate("GetTask", "Description", nullptr));
        label_6->setText(QCoreApplication::translate("GetTask", "Due Date", nullptr));
        label_5->setText(QCoreApplication::translate("GetTask", "Priority", nullptr));
        label_7->setText(QCoreApplication::translate("GetTask", "Status", nullptr));
        label_8->setText(QCoreApplication::translate("GetTask", "Assignee", nullptr));
        txtStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GetTask: public Ui_GetTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETTASK_H
