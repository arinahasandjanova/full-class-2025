#include <QTextStream>
#include <QDate>
#include <QTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate cd = QDate::currentDate();
    out << cd.toString(Qt::TextDate) << endl;
    out << cd.toString(Qt::ISODate) << endl;
    out << cd.toString(Qt::SystemLocaleShortDate) << endl;
    out << cd.toString(Qt::SystemLocaleLongDate) << endl;
    out << cd.toString(Qt::DefaultLocaleShortDate) << endl;
    out << cd.toString(Qt::DefaultLocaleLongDate) << endl;
    out << cd.toString(Qt::SystemLocaleDate) << endl;
    out << cd.toString(Qt::LocalDate) << endl;

    return 0;
}
