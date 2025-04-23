#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QMainWindow>
#include <QWidget>
#include <QProgressBar>
#include <QPushButton>

class ProgressBarEx: public QWidget{
public:
    ProgressBarEx(QWidget* parent = nullptr);
private:
    int progress;
    QTimer* timer;
    QPushButton* startbtn;
    QPushButton* stopbtn;
    QProgressBar* pbar;
    static const int DELAY = 200;
    static const int MAX_VALUE = 100;
    void updateBar();
    void startMyTimer();
    void stopMyTimer();
};

#endif // PROGRESSBAR_H
