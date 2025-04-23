#include "statusbar.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    StatusBar window;
    window.show();
    return app.exec();
}
