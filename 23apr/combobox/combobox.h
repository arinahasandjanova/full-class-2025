#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QMainWindow>
#include <QWidget>
#include <QApplication>
#include <QComboBox>
#include <QLabel>
#include <QString>

class ComboBoxEx: public QWidget{
public:
    ComboBoxEx(QWidget* parent = 0);
private:
    QComboBox* combobox;
    QLabel* label;
};


#endif // COMBOBOX_H
