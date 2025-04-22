#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>

class Buttons:public QWidget{
public:
    Buttons(QWidget* parent = nullptr);
private:
    QPushButton* okbtn;
    QPushButton* applybtn;
};

#endif // BUTTONS_H
