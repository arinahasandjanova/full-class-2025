#include "vertical.h"

int main(int argc, char*argv[]){
    QApplication app(argc, argv);
    VerticalBox window;
    window.setWindowTitle("vertical");
    window.resize(200, 150);
    window.show();
    return app.exec();
}
