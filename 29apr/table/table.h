#ifndef TABLE_H
#define TABLE_H

#include <QMainWindow>
#include <QWidget>
#include <QTableWidget>

class Table: public QWidget{
public:
    Table(QWidget* parent = nullptr);
    QTableWidget* table;
};

#endif // TABLE_H
