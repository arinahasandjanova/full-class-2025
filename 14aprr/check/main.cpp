#include "check.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    CheckMenu window;
    window.resize(250, 150);
    window.setWindowTitle("status menu bar");
    window.show();
    return app.exec();
}
