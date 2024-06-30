/********************************************************************************
** Form generated from reading UI file 'additemsdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMSDLG_H
#define UI_ADDITEMSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdditemsDlg
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineofprice;
    QLineEdit *lineofname;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineoftip;
    QLabel *label_5;
    QSpinBox *spinBox;
    QDateEdit *dateEdit;

    void setupUi(QDialog *AdditemsDlg)
    {
        if (AdditemsDlg->objectName().isEmpty())
            AdditemsDlg->setObjectName("AdditemsDlg");
        AdditemsDlg->resize(400, 300);
        gridLayoutWidget = new QWidget(AdditemsDlg);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 70, 321, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 7, 0, 1, 2);

        lineofprice = new QLineEdit(gridLayoutWidget);
        lineofprice->setObjectName("lineofprice");

        gridLayout->addWidget(lineofprice, 2, 1, 1, 1);

        lineofname = new QLineEdit(gridLayoutWidget);
        lineofname->setObjectName("lineofname");

        gridLayout->addWidget(lineofname, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineoftip = new QLineEdit(gridLayoutWidget);
        lineoftip->setObjectName("lineoftip");

        gridLayout->addWidget(lineoftip, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 3, 1, 1, 1);


        retranslateUi(AdditemsDlg);
        QObject::connect(pushButton, &QPushButton::clicked, AdditemsDlg, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AdditemsDlg);
    } // setupUi

    void retranslateUi(QDialog *AdditemsDlg)
    {
        AdditemsDlg->setWindowTitle(QCoreApplication::translate("AdditemsDlg", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AdditemsDlg", "\346\267\273\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("AdditemsDlg", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AdditemsDlg", "\345\215\225\344\273\267\357\274\210\351\200\211\345\241\253\357\274\211\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AdditemsDlg", "\344\277\235\350\264\250\346\234\237\350\207\263\357\274\210\351\200\211\345\241\253\357\274\211\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("AdditemsDlg", "\347\211\251\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AdditemsDlg", "\345\244\207\346\263\250\357\274\210\351\200\211\345\241\253\357\274\211\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdditemsDlg: public Ui_AdditemsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMSDLG_H
