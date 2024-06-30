#include "additemsdlg.h"
#include "ui_additemsdlg.h"

AdditemsDlg::AdditemsDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdditemsDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("请添加物品");
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(mvslotData()));
    //关联按钮和槽函数
}

AdditemsDlg::~AdditemsDlg()
{
    delete ui;
}



void AdditemsDlg::mvslotData(){
    QString sname=ui->lineofname->text();
    int snumber=ui->spinBoxnumber->value();
    double sprice=ui->doubleSpinBoxprice->value();
    QDate sexp=ui->dateEdit->date();
    QString stip=ui->lineoftip->text();
    emit mvsigData(sname,snumber,sprice,sexp,stip);
}//按钮对应槽函数

//添加物品的窗口
