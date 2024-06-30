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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *modifycurrentnode;
    QLineEdit *lineofmodifynodename;
    QLineEdit *lineofdadnodename;
    QPushButton *addnode;
    QLineEdit *lineofsonnodename;
    QPushButton *addkidnode;
    QPushButton *getcurrentnode;
    QPushButton *delnode;
    QPushButton *additemstocurrentnode;
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 350, 431, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        modifycurrentnode = new QPushButton(layoutWidget);
        modifycurrentnode->setObjectName("modifycurrentnode");

        gridLayout->addWidget(modifycurrentnode, 3, 0, 1, 2);

        lineofmodifynodename = new QLineEdit(layoutWidget);
        lineofmodifynodename->setObjectName("lineofmodifynodename");

        gridLayout->addWidget(lineofmodifynodename, 3, 2, 1, 1);

        lineofdadnodename = new QLineEdit(layoutWidget);
        lineofdadnodename->setObjectName("lineofdadnodename");

        gridLayout->addWidget(lineofdadnodename, 0, 2, 1, 1);

        addnode = new QPushButton(layoutWidget);
        addnode->setObjectName("addnode");

        gridLayout->addWidget(addnode, 0, 0, 1, 2);

        lineofsonnodename = new QLineEdit(layoutWidget);
        lineofsonnodename->setObjectName("lineofsonnodename");

        gridLayout->addWidget(lineofsonnodename, 2, 2, 1, 1);

        addkidnode = new QPushButton(layoutWidget);
        addkidnode->setObjectName("addkidnode");

        gridLayout->addWidget(addkidnode, 2, 0, 1, 2);

        getcurrentnode = new QPushButton(layoutWidget);
        getcurrentnode->setObjectName("getcurrentnode");

        gridLayout->addWidget(getcurrentnode, 6, 0, 1, 3);

        delnode = new QPushButton(layoutWidget);
        delnode->setObjectName("delnode");

        gridLayout->addWidget(delnode, 7, 0, 1, 3);

        additemstocurrentnode = new QPushButton(layoutWidget);
        additemstocurrentnode->setObjectName("additemstocurrentnode");

        gridLayout->addWidget(additemstocurrentnode, 5, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        modifycurrentnode->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\275\223\345\211\215\345\234\260\347\202\271", nullptr));
        addnode->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\200\347\272\247\345\234\260\347\202\271", nullptr));
        addkidnode->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\272\214\347\272\247\345\234\260\347\202\271", nullptr));
        getcurrentnode->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\275\223\345\211\215\345\234\260\347\202\271\345\206\205\345\256\271", nullptr));
        delnode->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\345\234\260\347\202\271", nullptr));
        additemstocurrentnode->setText(QCoreApplication::translate("MainWindow", "\345\220\221\345\275\223\345\211\215\345\234\260\347\202\271\346\267\273\345\212\240\347\211\251\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
