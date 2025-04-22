#include "vertical.h"
#include <QVBoxLayout>
#include <QPushButton>

VerticalBox::VerticalBox(QWidget *parent): QWidget(parent){
    auto* vbox = new QVBoxLayout(this);
    vbox->setSpacing(1);
    auto* prikmat = new QPushButton("Prikmat");
    prikmat->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    auto* filfak = new QPushButton("Filfak");
    filfak->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    auto* fizfak = new QPushButton("Fizfak");
    fizfak->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    auto* psixi = new QPushButton("Psixi");
    psixi->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    vbox->addWidget(prikmat);
    vbox->addWidget(filfak);
    vbox->addWidget(fizfak);
    vbox->addWidget(psixi);
    setLayout(vbox);
}
