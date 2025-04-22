#include <QVBoxLayout>
#include <QHBoxLayout>
#include "buttons.h"

Buttons::Buttons(QWidget* parent): QWidget(parent){
    auto* vbox = new QVBoxLayout(this);
    auto* hbox = new QHBoxLayout();
    okbtn = new QPushButton("OK", this);
    applybtn = new QPushButton("Apply", this);
    hbox->addWidget(okbtn, 1, Qt::AlignRight);
    hbox->addWidget(applybtn, 0);
    vbox->addStretch(1);
    vbox->addLayout(hbox);
}
