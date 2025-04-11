#include "plusminus.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    PlusMinus window;
    window.resize(250, 150);
    window.setWindowTitle(QString("счётчик рядов"));
    window.show();
    return app.exec();
}
