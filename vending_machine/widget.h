#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_pb500_clicked();

    void on_pb100_clicked();

    void on_pb50_clicked();

    void on_pb10_clicked();

    void on_pbCoffee_clicked();

    void on_pbTea_clicked();

    void on_pbYul_clicked();

    void on_pbReset_clicked();

private:
    Ui::Widget *ui;
    int coin = 0;
    int chng;//totall change
    int result;
    int a, b, c, d;//500,100,50,10(count per coin)

};

#endif // WIDGET_H
