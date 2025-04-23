#include "progressbar.h"
#include <QTimer>
#include <QGridLayout>

ProgressBarEx::ProgressBarEx(QWidget* parent): QWidget(parent){
    progress = 0;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ProgressBarEx::updateBar);
    QGridLayout* grd = new QGridLayout(this);
    grd->setColumnStretch(2, 1);
    pbar = new QProgressBar();
    grd->addWidget(pbar, 0, 0, 1, 3);
    startbtn = new QPushButton("start", this);
    connect(startbtn, &QPushButton::clicked, this, &ProgressBarEx::startMyTimer);
    grd->addWidget(startbtn, 1, 0, 1, 1);
    stopbtn = new QPushButton("stop", this);
    connect(stopbtn, &QPushButton::clicked, this, &ProgressBarEx::stopMyTimer);
    grd->addWidget(stopbtn, 1, 1);
}

void ProgressBarEx::startMyTimer(){
    if(progress >= MAX_VALUE){
        progress = 0;
        pbar->setValue(0);
    }
    if(!timer->isActive()){
        startbtn->setEnabled(false);
        stopbtn->setEnabled(true);
        timer->start(DELAY);
    }
}

void ProgressBarEx::stopMyTimer(){
    if(timer->isActive()){
        startbtn->setEnabled(true);
        stopbtn->setEnabled(false);
        timer->stop();
    }
}
void ProgressBarEx::updateBar(){
    progress++;
    if(progress <= MAX_VALUE){
        pbar->setValue(progress);
    } else {
        timer->stop();
        startbtn->setEnabled(true);
        stopbtn->setEnabled(false);
    }
}
