#ifndef ADDITEMSDLG_H
#define ADDITEMSDLG_H

#include <QDialog>

namespace Ui {
class AdditemsDlg;
}

class AdditemsDlg : public QDialog
{
    Q_OBJECT

public:
    AdditemsDlg(QWidget *parent = nullptr);
    ~AdditemsDlg();
signals:
    void mvsigData(QString sname,int snumber,double sprice,QDate& sexp,QString stip);
//发送数据信号
private slots:
    void mvslotData();
//响应按钮

private:
    Ui::AdditemsDlg *ui;
};

#endif // ADDITEMSDLG_H
