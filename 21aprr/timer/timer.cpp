#include "timer.h"
#include <QHBoxLayout>
#include <QTime>

Timer::Timer(QWidget* parent): QWidget(parent){
    QHBoxLayout* hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);
    //hbox->addStretch();
    label = new QLabel("", this);
    hbox->addWidget(label, 0, Qt::AlignCenter);
    QTime qtime = QTime::currentTime();
    QString stime = qtime.toString();
    label->setText(stime);
    startTimer(1000);
}

void Timer::timerEvent(QTimerEvent *e){
    Q_UNUSED(e);
    QTime qtime = QTime::currentTime();
    QString stime = qtime.toString();
    label->setText(stime);
}
