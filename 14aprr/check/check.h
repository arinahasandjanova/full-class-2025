#ifndef CHECK_H
#define CHECK_H

#include <QMainWindow>
#include <QApplication>

class CheckMenu: public QMainWindow{
Q_OBJECT
public:
    CheckMenu(QWidget *parent = 0);
private slots:
    void toggleStatusBar();
private:
    QAction *viewst;
};


#endif // CHECK_H
