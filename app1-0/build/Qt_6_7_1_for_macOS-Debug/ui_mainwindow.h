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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeView *treeView;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *addnode;
    QPushButton *modifycurrentnode;
    QPushButton *addkidnode;
    QPushButton *delnode;
    QPushButton *getcurrentnode;
    QLineEdit *lineofdadnodename;
    QLineEdit *lineofsonnodename;
    QLabel *label_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(10, 10, 771, 301));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 330, 58, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 350, 211, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 324, 451, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addnode = new QPushButton(widget);
        addnode->setObjectName("addnode");

        gridLayout->addWidget(addnode, 0, 0, 1, 1);

        modifycurrentnode = new QPushButton(widget);
        modifycurrentnode->setObjectName("modifycurrentnode");

        gridLayout->addWidget(modifycurrentnode, 2, 1, 1, 1);

        addkidnode = new QPushButton(widget);
        addkidnode->setObjectName("addkidnode");

        gridLayout->addWidget(addkidnode, 1, 0, 1, 1);

        delnode = new QPushButton(widget);
        delnode->setObjectName("delnode");

        gridLayout->addWidget(delnode, 2, 0, 1, 1);

        getcurrentnode = new QPushButton(widget);
        getcurrentnode->setObjectName("getcurrentnode");

        gridLayout->addWidget(getcurrentnode, 2, 2, 1, 1);

        lineofdadnodename = new QLineEdit(widget);
        lineofdadnodename->setObjectName("lineofdadnodename");

        gridLayout->addWidget(lineofdadnodename, 0, 2, 1, 1);

        lineofsonnodename = new QLineEdit(widget);
        lineofsonnodename->setObjectName("lineofsonnodename");

        gridLayout->addWidget(lineofsonnodename, 1, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\345\220\215\347\247\260\357\274\232", nullptr));
        addnode->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\200\347\272\247\350\212\202\347\202\271", nullptr));
        modifycurrentnode->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\275\223\345\211\215\350\212\202\347\202\271", nullptr));
        addkidnode->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\272\214\347\272\247\350\212\202\347\202\271", nullptr));
        delnode->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\212\202\347\202\271", nullptr));
        getcurrentnode->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\275\223\345\211\215\350\212\202\347\202\271\345\206\205\345\256\271", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\272\214\347\272\247\350\212\202\347\202\271\345\220\215\347\247\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\200\347\272\247\350\212\202\347\202\271\345\220\215\347\247\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
