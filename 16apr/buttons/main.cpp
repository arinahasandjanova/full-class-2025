#include "buttons.h"

int main(int argc, char*argv[]){
    QApplication app(argc, argv);
    Buttons window;
    window.setWindowTitle("button");
    window.show();
    return app.exec();
}
