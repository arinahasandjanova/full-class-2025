#include "mainwindow.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QWidget window;
    window.resize(250, 150);
    window.move(300, 300);
    window.setWindowTitle("Msu Baku");
    window.setToolTip("How to go to Khojasan");
    window.show();
    return app.exec();
}
