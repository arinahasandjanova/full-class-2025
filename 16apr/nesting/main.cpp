#include "nesting.h"

int main(int argc, char*argv[]){
    QApplication app(argc, argv);
    Layouts window;
    window.setWindowTitle("nesting");
    window.resize(200, 150);
    window.show();
    return app.exec();
}
