#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include<qdatetime.h>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->setMouseTracking(true);
    this->setMouseTracking(true);

    btnH=ui->pushButton->height()+20;
    btnW=ui->pushButton->width()+20;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow:: mouseMoveEvent(QMouseEvent *e)
{
    qDebug()<<"按钮的坐标位置："<< ui->pushButton->x()<<ui->pushButton->y();
//    qDebug()<<"鼠标坐标："<<e->x()<<e->y();


//    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int reX = qrand()%400;
    int reY=qrand()%260 ;
    qDebug()<<"随机数："<< reX<<reY;

    if(e->x()<ui->pushButton->x()+btnW&&e->x()>ui->pushButton->x()-20&&e->y()<ui->pushButton->y()+btnH&&e->y()>ui->pushButton->y()-20)
    {
        qDebug()<<"enter";
        ui->pushButton->setGeometry(reX,reY,93,28);
    }


}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this,NULL,"爱你哟！");
}
