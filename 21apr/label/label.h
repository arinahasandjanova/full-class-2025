#ifndef LABEL_H
#define LABEL_H

#include <QMainWindow>
#include <QLabel>
#include <QApplication>
#include <QWidget>

class Label: public QWidget{
private:
    QLabel* label;
public:
    Label(QWidget* parent = nullptr);
};

#endif // LABEL_H
