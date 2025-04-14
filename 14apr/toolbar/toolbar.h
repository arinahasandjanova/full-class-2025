#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QApplication>
#include <QMainWindow>

class ToolBar:public QMainWindow{
Q_OBJECT
public:
    ToolBar(QWidget *parent=0);
};

#endif // TOOLBAR_H
