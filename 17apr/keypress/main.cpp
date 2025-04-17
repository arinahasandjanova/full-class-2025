#include "keypress.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    KeyPress window;
    window.setWindowTitle("keypress");
    window.resize(250, 150);
    window.show();
    return app.exec();
}
