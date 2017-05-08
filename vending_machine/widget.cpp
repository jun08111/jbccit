#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pb500_clicked()
{
   if(coin >= 0){
   coin = coin + 500;
   ui->leMoney->setText(QString::number(coin));
   }
   Widget::button_onoff();
}

void Widget::on_pb100_clicked()
{
    if(coin >= 0){
    coin = coin + 100;
    ui->leMoney->setText(QString::number(coin));
    }
    Widget::button_onoff();
}

void Widget::on_pb50_clicked()
{
    if(coin >= 0){
    coin = coin + 50;
    ui->leMoney->setText(QString::number(coin));
    }
    Widget::button_onoff();
}

void Widget::on_pb10_clicked()
{
    if(coin >= 0){
    coin = coin + 10;
    ui->leMoney->setText(QString::number(coin));
    }
    Widget::button_onoff();
}

void Widget::on_pbCoffee_clicked()
{
    if(coin >= 200){
    coin = coin - 200;
    ui->leMoney->setText(QString::number(coin));
    }
    Widget::button_onoff();
}

void Widget::on_pbTea_clicked()
{
    if(coin >= 100){
    coin = coin - 100;
    ui->leMoney->setText(QString::number(coin));
    }
    Widget::button_onoff();
}

void Widget::on_pbYul_clicked()
{
    if(coin >= 250){
    coin = coin - 250;
    ui->leMoney->setText(QString::number(coin));
    }
    Widget::button_onoff();
}

void Widget::on_pbReset_clicked()
{
    chng = coin;
    a = chng / 500;
    result = chng % 500;

    if(result != 0){
        b = result / 100;
        result = result % 100;

    if(result != 0){
        c = result / 50;
        result = result % 50;

    if(result != 0){
        d = result / 10;
        result = result % 10;
            }
        }
    }
    QMessageBox::information(this, tr("Chages"), tr("500: %1\n100: %2\n50: %3\n10: %4").arg(a).arg(b).arg(c).arg(d));
    coin = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    ui->pbCoffee->setEnabled(true);
    ui->pbTea->setEnabled(true);
    ui->pbYul->setEnabled(true);
    ui->leMoney->setText(QString::number(coin));
}
void Widget::button_onoff()
{
if(coin >= 200) ui->pbCoffee->setEnabled(true);
else ui->pbCoffee->setEnabled(false);
if(coin >= 100) ui->pbTea->setEnabled(true);
else ui->pbTea->setEnabled(false);
if(coin >= 250) ui->pbYul->setEnabled(true);
else ui->pbYul->setEnabled(false);
}
