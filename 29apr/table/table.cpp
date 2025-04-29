#include "table.h"
#include <QHBoxLayout>

Table::Table(QWidget* parent): QWidget(parent){
    QHBoxLayout* hbox = new QHBoxLayout(this);
    table = new QTableWidget(25, 25, this);
    hbox->addWidget(table);
}
