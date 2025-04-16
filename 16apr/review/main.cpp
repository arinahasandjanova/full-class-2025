#include "review.h"

int main(int argc, char*argv[]){
    QApplication app(argc, argv);
    Review window;
    window.setWindowTitle("review");
    window.show();
    return app.exec();
}
