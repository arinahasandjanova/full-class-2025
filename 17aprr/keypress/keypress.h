#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>

class KeyPress:public QWidget{
public:
    KeyPress(QWidget*parent = nullptr);
protected:
    void keyPressEvent(QKeyEvent* event);
};

#endif // KEYPRESS_H
