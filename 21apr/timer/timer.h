#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QLabel>

class Timer:public QWidget{
private:
    QLabel* label;
public:
    Timer(QWidget *parent = 0);
protected:
    void timerEvent(QTimerEvent *e);
};


#endif // TIMER_H
