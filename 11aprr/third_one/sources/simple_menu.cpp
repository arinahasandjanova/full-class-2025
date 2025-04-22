#include "simple_menu.h"
#include <QMenu>
#include <QMenuBar>
SimpleMenu::SimpleMenu(QWidget * parent): QMainWindow(parent){
    QAction *quit = new QAction("&Quit", this);
    QAction *resize = new QAction("&Resize", this);
    QMenu *file;
    file = menuBar()->addMenu("&File");
    QMenu *edit = menuBar()->addMenu("&Edit");
    file->addAction(quit);
    edit->addAction(resize);
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}
