#include "table.h"
#include <QApplication>
#include <QTableWidgetItem>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Table w;
    QTableWidgetItem* newItem = new QTableWidgetItem(QString::number((1+1)*(1+1)));
    w.table->setItem(1, 1, newItem);
    w.show();
    return a.exec();
}
