#include "listwidget.h"

#include <QApplication>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    ListWidget window;
    window.show();
    return app.exec();
}
