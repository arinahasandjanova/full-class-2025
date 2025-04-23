#include "progressbar.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    ProgressBarEx w;
    w.show();
    return a.exec();
}
