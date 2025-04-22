#include "disconnect.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Disconnect window;
    window.setWindowTitle("disconnect");
    window.show();
    return app.exec();
}
