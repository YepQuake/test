#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "additemsdlg.h"
#include <QMainWindow>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct Item{
    QString name,tip;
    int number;
    double price;
    QDate &exp;
    int irow,iparentrow;
    Item(QString _name,int _number,double _price,QDate& _exp,QString _tip,int _irow,int _iparentrow):name(_name),number(_number),price(_price),exp(_exp),tip(_tip),irow(_irow),iparentrow(_iparentrow){}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addnode_clicked();

    void on_addkidnode_clicked();

    void on_delnode_clicked();

    void on_getcurrentnode_clicked();

    void on_modifycurrentnode_clicked();

    void on_additemstocurrentnode_clicked();

    void receiveData(QString sname,int snumber,double sprice,QDate& sexp,QString stip);


private:
    Ui::MainWindow *ui;
    QStandardItemModel * my_pmodel;
    AdditemsDlg *dlg1;//dlg1为添加物品的子界面
    std::vector<Item> items;
};
#endif // MAINWINDOW_H

