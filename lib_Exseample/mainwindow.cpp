#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug()<<"nihaoxx";
    ui->setupUi(this);
    cc=new Plus;
   int c= debug_(3,5);
   ui->lineEdit->setText(tr("%1").arg(c));
   qDebug()<<c;
}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::debug_(int a,int b)
{

    return cc->addFun(a,b);
}
