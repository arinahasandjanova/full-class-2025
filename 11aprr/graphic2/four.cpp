#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyButton: public QWidget{
public:
    MyButton(QWidget *parent = 0);
};
MyButton::MyButton(QWidget* parent):QWidget(parent){
    QPushButton *quitBtn = new QPushButton(QString("Закончить универ"), this);
    quitBtn->setGeometry(50, 55, 150, 30);
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    MyButton window;
    window.resize(250, 150);
    window.setWindowTitle(QString("если доживёшь"));
    window.show();
    return app.exec();
}
