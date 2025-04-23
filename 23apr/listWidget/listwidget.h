#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QMainWindow>
#include <QListWidget>
#include <QPushButton>
#include <QWidget>

class ListWidget: public QWidget{
public:
    ListWidget(QWidget* parent = 0);
private slots:
    void additem();
    void renameItem();
    void removeItem();
    void clearItems();
private:
    QListWidget* lw;
    QPushButton* add;
    QPushButton* rename;
    QPushButton* remove;
    QPushButton* removeAll;



};


#endif // LISTWIDGET_H
