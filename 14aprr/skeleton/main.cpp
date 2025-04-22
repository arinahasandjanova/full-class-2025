#include "skeleton.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Skeleton window;
    window.resize(250, 150);
    window.setWindowTitle("skeleton");
    window.show();
    return app.exec();
}
