#ifndef DISCONNECT_H
#define DISCONNECT_H

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>

class Disconnect:public QWidget{
    Q_OBJECT
public:
    Disconnect(QWidget*parent = nullptr);
private slots:
    void onClick();
    void onCheck(int);
private:
    QPushButton* clickbtn;
};

#endif // DISCONNECT_H
