#include "toolbar.h"
#include <QIcon>
#include <QToolBar>
#include <QAction>

ToolBar::ToolBar(QWidget *parent): QMainWindow(parent){
    QPixmap newpix("../../assets/new.png");
    QPixmap openpix("../../assets/open.png");
    QPixmap quitpix("../../assets/quit.png");
    QToolBar *toolbar = addToolBar("main");
    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();
    QAction *quit = toolbar->addAction(QIcon(quitpix), "Quit");
    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
