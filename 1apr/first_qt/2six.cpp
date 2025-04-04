#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString name = "Имя: ";
    QString ocupation = "Род занятий: ";
    QString address = "Адрес проживания: ";
    int width = address.size();
    out << name.rightJustified(width, ' ') << QString("Анна") << endl;
    out << ocupation.rightJustified(width, ' ') << QString("Доктор") << endl;
    out << address.rightJustified(width, ' ') << QString("Баку, Бинагадинский район") << endl;
    out << endl;
    out << name.leftJustified(width, ' ') << QString("Анна") << endl;
    out << ocupation.leftJustified(width, ' ') << QString("Доктор") << endl;
    out << address.leftJustified(width, ' ') << QString("Баку, Бинагадинский район") << endl;

    return 0;
}
