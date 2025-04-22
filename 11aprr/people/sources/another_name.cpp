#include "another_name.h"
#include <QMenu>
#include <QMenuBar>

AnotherMenu::AnotherMenu(QWidget *parent): QMainWindow(parent){
    QPixmap newpix("../../assets/new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");
    QAction *news = new QAction(newpix, "&New", this);
    QAction *open = new QAction(openpix, "&Open", this);
    QAction *quit = new QAction(quitpix, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q"));
    QMenu *file;
    file=menuBar()->addMenu("&File");
    file->addAction(news);
    file->addAction(open);
    file->addSeparator();
    file->addAction(quit);
    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}
