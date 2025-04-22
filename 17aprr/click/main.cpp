#include "click.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Click window;
    window.setWindowTitle("click");
    window.show();
    return app.exec();
}
