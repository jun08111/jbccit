#ifndef THREAD_H
#define THREAD_H

#include <QWidget>
#include <QMessageBox>
#include <QThread>

class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(QObject *parent = 0);

signals:
void run();

public slots:

};

#endif // THREAD_H
