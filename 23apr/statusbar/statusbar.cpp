#include "statusbar.h"
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>
#include <QLabel>

StatusBar::StatusBar(QWidget* parent): QMainWindow(parent){
    auto frame = new QFrame(this);
    setCentralWidget(frame);
    auto* hbox = new QHBoxLayout(frame);
    okbtn = new QPushButton("OK", frame);
    hbox->addWidget(okbtn, 0, Qt::AlignLeft|Qt::AlignTop);
    applybtn = new QPushButton("Apply", frame);
    hbox->addWidget(applybtn, 1, Qt::AlignLeft|Qt::AlignTop);
    statusBar();
    connect(okbtn, &QPushButton::clicked, this, &StatusBar::onOkPresssed);
    connect(applybtn, &QPushButton::clicked, this, &StatusBar::onApplyPressed);
}

void StatusBar::onOkPresssed(){
    statusBar()->showMessage("Ok button pressed", 2000);
}

void StatusBar::onApplyPressed(){
    statusBar()->showMessage("Apply button pressed", 2000);
}
