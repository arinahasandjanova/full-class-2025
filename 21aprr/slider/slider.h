#ifndef SLIDER_H
#define SLIDER_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider:public QWidget{
public:
    Slider(QWidget* parent = nullptr);
private:
    QLabel* label;
    QSlider* slider;
};


#endif // SLIDER_H
