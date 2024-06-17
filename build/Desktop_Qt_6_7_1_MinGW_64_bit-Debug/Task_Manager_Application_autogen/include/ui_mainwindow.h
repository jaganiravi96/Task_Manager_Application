/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddTaskButton;
    QPushButton *UpdateTaskButton;
    QPushButton *DeleteTaskButton;
    QPushButton *DisplayAllTaskButton;
    QPushButton *GetTaskButton;
    QPushButton *GenerateReportButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        MainWindow->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AddTaskButton = new QPushButton(centralwidget);
        AddTaskButton->setObjectName("AddTaskButton");
        AddTaskButton->setGeometry(QRect(32, 20, 91, 29));
        AddTaskButton->setAutoDefault(false);
        AddTaskButton->setFlat(false);
        UpdateTaskButton = new QPushButton(centralwidget);
        UpdateTaskButton->setObjectName("UpdateTaskButton");
        UpdateTaskButton->setGeometry(QRect(150, 20, 91, 29));
        DeleteTaskButton = new QPushButton(centralwidget);
        DeleteTaskButton->setObjectName("DeleteTaskButton");
        DeleteTaskButton->setGeometry(QRect(270, 20, 91, 29));
        DisplayAllTaskButton = new QPushButton(centralwidget);
        DisplayAllTaskButton->setObjectName("DisplayAllTaskButton");
        DisplayAllTaskButton->setGeometry(QRect(390, 20, 121, 29));
        GetTaskButton = new QPushButton(centralwidget);
        GetTaskButton->setObjectName("GetTaskButton");
        GetTaskButton->setGeometry(QRect(540, 20, 91, 29));
        GenerateReportButton = new QPushButton(centralwidget);
        GenerateReportButton->setObjectName("GenerateReportButton");
        GenerateReportButton->setGeometry(QRect(660, 20, 121, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        AddTaskButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Task Manager 1.0", nullptr));
        AddTaskButton->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        UpdateTaskButton->setText(QCoreApplication::translate("MainWindow", "Update Task", nullptr));
        DeleteTaskButton->setText(QCoreApplication::translate("MainWindow", "Delete Task", nullptr));
        DisplayAllTaskButton->setText(QCoreApplication::translate("MainWindow", "Display All Task", nullptr));
        GetTaskButton->setText(QCoreApplication::translate("MainWindow", "Get Task", nullptr));
        GenerateReportButton->setText(QCoreApplication::translate("MainWindow", "Generate Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
