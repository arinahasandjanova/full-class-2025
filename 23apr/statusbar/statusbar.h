#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>

class StatusBar: public QMainWindow{
    Q_OBJECT
public:
    StatusBar(QWidget* parent = 0);
private:
    QPushButton* okbtn;
    QPushButton* applybtn;
private slots:
    void onOkPresssed();
    void onApplyPressed();
};


#endif // STATUSBAR_H
