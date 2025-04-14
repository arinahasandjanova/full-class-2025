#include "check.h"
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>

CheckMenu::CheckMenu(QWidget *parent): QMainWindow(parent){
    viewst = new QAction ("&View status bar");
    viewst->setCheckable(true);
    viewst->setChecked(true);
    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(viewst);
    statusBar();
    connect(viewst, &QAction::triggered, this, &CheckMenu::toggleStatusBar);
}

void CheckMenu::toggleStatusBar(){
    if(viewst->isChecked()){
        statusBar()->show();
    } else {
        statusBar()->hide();
    }
}
