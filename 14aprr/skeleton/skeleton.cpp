#include "skeleton.h"
#include <QMenu>
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>
Skeleton::Skeleton(QWidget *parent): QMainWindow(parent) {
    QPixmap newpix("../../assets/new.png");
    QPixmap openpix("../../assets/open.png");
    QPixmap quitpix("../../assets/quit.png");
    QAction *quit = new QAction("&Quit", this);
    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);
    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
    QToolBar *toolbar = addToolBar("main");
    toolbar->addAction(QIcon(newpix), "New");
    toolbar->addAction(QIcon(openpix), "Open");
    toolbar->addSeparator();
    QAction *quit2 = toolbar->addAction(QIcon(quitpix), "quit");
    connect(quit2, &QAction::triggered, qApp, &QApplication::quit);
    QTextEdit *edit = new QTextEdit(this);
    setCentralWidget(edit);
    statusBar()->showMessage("ready");
}
