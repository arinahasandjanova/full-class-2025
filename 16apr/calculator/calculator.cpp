#include "calculator.h"
#include <QPushButton>
#include <QGridLayout>

Calculator::Calculator(QWidget* parent): QWidget(parent){
    auto* grid = new QGridLayout(this);
    grid->setSpacing(2);
    QVector<QString> values = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "/", ".", "+", "-", "*", "="};
    int pos = 0;
    for(int i = 0; i!=4; ++i){
        for(int j = 0; j!=4; ++j){
            auto* btn = new QPushButton(values[pos], this);
            btn->setFixedSize(40, 40);
            grid->addWidget(btn, i, j);
            pos++;
        }
    }
    setLayout(grid);
}
