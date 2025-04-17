#include "click.h"
#include <QHBoxLayout>
#include <QPushButton>

Click::Click(QWidget* parent):QWidget(parent){
    auto* hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);
    auto* quitbtn = new QPushButton("Quit", this);
    hbox->addWidget(quitbtn, 0, Qt::AlignLeft|Qt::AlignTop);
    connect(quitbtn, &QPushButton::clicked, qApp, &QApplication::quit);
}
