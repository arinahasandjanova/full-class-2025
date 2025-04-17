#include "disconnect.h"
#include <QTextStream>
#include <QCheckBox>
#include <QHBoxLayout>

Disconnect::Disconnect(QWidget* parent): QWidget(parent){
    auto* hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);
    clickbtn = new QPushButton("click", this);
    hbox->addWidget(clickbtn, 0, Qt::AlignLeft|Qt::AlignTop);
    QCheckBox* cb = new QCheckBox("connect", this);
    cb->setCheckState(Qt::Checked);
    hbox->addWidget(cb, 0, Qt::AlignLeft|Qt::AlignTop);
    connect(cb, &QCheckBox::stateChanged, this, &Disconnect::onCheck);
    connect(clickbtn, &QPushButton::clicked, this, &Disconnect::onClick);
}
void Disconnect::onCheck(int state){
    if(state==Qt::Checked){
        connect(clickbtn, &QPushButton::clicked, this, &Disconnect::onClick);
    } else {
        disconnect(clickbtn, &QPushButton::clicked, this, &Disconnect::onClick);
    }
}

void Disconnect::onClick(){
    QTextStream out(stdout);
    out << "Button clicked" << endl;
}
