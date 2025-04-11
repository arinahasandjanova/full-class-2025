#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QWidget window;
    window.resize(250, 150);
    window.setWindowTitle("Msu Prikmat");
    window.setWindowIcon(QIcon("sample.png"));
    window.show();
    return app.exec();
}
