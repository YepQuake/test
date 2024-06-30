#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "additemsdlg.h"
#include <QDate>
#include <QMessageBox>
#include <QDebug>
#include <QVBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //此处为window的构造函数

    ui->setupUi(this);

    //设置窗口标题名称
    this->setWindowTitle("物品分类管理系统1.0版本");

    //禁用最大化按钮
    this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);

    //建立数据模型对象空间
    my_pmodel=new QStandardItemModel(ui->treeView);

    //将数据模型设置到树形控件视图上
    ui->treeView->setModel(my_pmodel);

    //设置水平表头列平均分
    ui->treeView->header()->setSectionResizeMode(QHeaderView::Stretch);

    //添加控件标题名称
    my_pmodel->setHorizontalHeaderLabels(QStringList()<<"地点名称");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addnode_clicked()
{
    //添加父节点
    int idxnum=my_pmodel->rowCount();//序号
    QList <QStandardItem*> toplist;
    QString obj_name=ui->lineofdadnodename->text();
    toplist<< new QStandardItem(QString("%1").arg(idxnum+1)+". "+obj_name);
    ui->lineofdadnodename->setText(0);

    //设置一级节点
    toplist[0]->setData(-1,Qt::UserRole+1);

    //添加一级节点
    my_pmodel->appendRow(toplist);
}//新建父节点


void MainWindow::on_addkidnode_clicked()
{
    //添加子节点

    //获取当前行列
    QModelIndex currentIndex=ui->treeView->currentIndex();
    int irow=currentIndex.row();
    int icol=currentIndex.column();
    int iparentrow=currentIndex.data(Qt::UserRole+1).toInt();
    //下面的if是用于判断什么情况下不能添加子节点的
    if(irow==-1||icol==-1||iparentrow!=-1){
        return;
    }
    QStandardItem *currentTopItem=my_pmodel->item(irow);
    QList <QStandardItem*> childlist;
    QString obj_name=ui->lineofsonnodename->text();
    ui->lineofsonnodename->setText(0);
    childlist<<new QStandardItem (QString("%1").arg(currentTopItem->row()+1)+'-'+QString("%1").arg(currentTopItem->rowCount()+1)+' '+obj_name);
    childlist[0]->setData(irow,Qt::UserRole+1);
    currentTopItem->appendRow(childlist);
}//新建子节点


void MainWindow::on_delnode_clicked()
{
    //获取当前行列
    QModelIndex currentIndex=ui->treeView->currentIndex();
    int irow=currentIndex.row();
    int icol=currentIndex.column();
    int iparentrow=currentIndex.data(Qt::UserRole+1).toInt();
    if(irow==-1||icol==-1){
        return;
    }

    if(-1==iparentrow){
        my_pmodel->removeRow(irow);
    }
    else
    {
        QStandardItem*  parentItem=my_pmodel->item(iparentrow);
        parentItem->removeRow(irow);
    }

}//删除节点


void MainWindow::on_getcurrentnode_clicked()
{
    std::vector<Item> searched;
    QModelIndex currentIndex=ui->treeView->currentIndex();
    int sirow=currentIndex.row();
    int sicol=currentIndex.column();
    int siparentrow=currentIndex.data(Qt::UserRole+1).toInt();
    for(int i=0;i<int(items.size());i++){
        if(items[i].irow==sirow&&items[i].iparentrow==siparentrow){
            searched.push_back(items[i]);
        }
    }
    if (searched.size() > 0) {
        QDialog *dialog = new QDialog(this);
        dialog->setWindowTitle("Items Information");

        QVBoxLayout *mainLayout = new QVBoxLayout(dialog);
        for (const auto &item : searched) {
            QHBoxLayout *itemLayout = new QHBoxLayout;
            QString expirationDateStr;
            if (!item.exp.isValid()) {
                expirationDateStr = item.exp.toString("yyyy-MM-dd");
            } else {
                expirationDateStr = "Invalid Date";
            }
            QString itemInfo = QString("Name: %1  Number: %2  Price: %3  Expiration Date: %4  Tip: %5")
                                   .arg(item.name)
                                   .arg(item.number)
                                   .arg(item.price)
                                   .arg(expirationDateStr)
                                   .arg(item.tip);

            QLabel *label = new QLabel(itemInfo);
            itemLayout->addWidget(label);
            mainLayout->addLayout(itemLayout);
        }

        dialog->setLayout(mainLayout);
        dialog->exec();
        delete dialog;
    } else {
        QMessageBox::information(this, "No Items Found", "No items found matching the selected criteria.");
    }

}


void MainWindow::on_modifycurrentnode_clicked()
{
    QModelIndex currentIndex=ui->treeView->currentIndex();
    int irow=currentIndex.row();
    int icol=currentIndex.column();
    int iparentrow=currentIndex.data(Qt::UserRole+1).toInt();
    if(irow==-1||icol==-1){
        return;
    }
    if(iparentrow==-1){
        QStandardItem*  parentItem=my_pmodel->item(irow);
        QString obj_name=ui->lineofmodifynodename->text();
        ui->lineofmodifynodename->setText(0);
        parentItem->setText(QString("%1").arg(parentItem->row()+1)+". "+obj_name);
    }
    else{
        QString obj_name=ui->lineofmodifynodename->text();
        ui->lineofmodifynodename->setText(0);
        QStandardItem* kidItem=my_pmodel->item(iparentrow)->child(irow);
        kidItem->setText(QString("%1").arg(iparentrow+1)+'-'+QString("%1").arg(irow+1)+' '+obj_name);
    }

}//修改节点



void MainWindow::on_additemstocurrentnode_clicked()
{
    QModelIndex currentIndex=ui->treeView->currentIndex();
    int irow=currentIndex.row();
    int icol=currentIndex.column();
    if(irow==-1||icol==-1){
        return;
    }
    else{
        dlg1=new AdditemsDlg(this);
        //关联子界面信号和槽函数
        connect(dlg1,SIGNAL(mvsigData(QString,int,double,QDate&,QString)),this,SLOT(receiveData(QString,int,double,QDate&,QString)));
        dlg1->show();
    }
}//添加物品

void MainWindow::receiveData(QString sname,int snumber,double sprice,QDate& sexp,QString stip){
    QModelIndex currentIndex=ui->treeView->currentIndex();
    int irow=currentIndex.row();
    int iparentrow=currentIndex.data(Qt::UserRole+1).toInt();
    items.push_back(Item(sname,snumber,sprice,sexp,stip,irow,iparentrow));
}

