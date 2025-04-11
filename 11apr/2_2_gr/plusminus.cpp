#include "plusminus.h"
#include <QGridLayout>
PlusMinus::PlusMinus(QWidget * parent): QWidget(parent){
    QPushButton *plsbtn = new QPushButton("+", this);
    QPushButton *mnsbtn = new QPushButton("-", this);
    lbl = new QLabel("0", this);
    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(plsbtn, 0, 0);
    grid->addWidget(mnsbtn, 0, 1);
    grid->addWidget(lbl, 0, 2);
    setLayout(grid);
    connect(plsbtn, &QPushButton::clicked, this, &PlusMinus::onPlus);
    connect(mnsbtn, &QPushButton::clicked, this, &PlusMinus::onMinus);
}

void PlusMinus::onPlus(){
    int val = lbl->text().toInt();
    val++;
    lbl->setText(QString::number(val));
}
void PlusMinus::onMinus(){
    int val = lbl->text().toInt();
    val--;
    lbl->setText(QString::number(val));
}
