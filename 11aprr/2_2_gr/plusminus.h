#ifndef PLUSMINUS_H
#define PLUSMINUS_H //вместо всего можно #pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class PlusMinus:public QWidget{
Q_OBJECT
public:
    PlusMinus(QWidget * parent = 0);
private slots:
    void onPlus();
    void onMinus();
private:
    QLabel *lbl;
};

#endif // PLUSMINUS_H
