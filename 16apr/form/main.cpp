#include "form.h"

int main(int argc, char*argv[]){
    QApplication app(argc, argv);
    FormEx window;
    window.setWindowTitle("nesting");
    window.show();
    return app.exec();
}
