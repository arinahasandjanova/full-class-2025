#include "toolbar.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    ToolBar window;
    window.resize(250, 150);
    window.setWindowTitle("new toolbar");
    window.show();
    return app.exec();
}
