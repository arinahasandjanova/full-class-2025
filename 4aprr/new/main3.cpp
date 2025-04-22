#include <QTextStream>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate cd = QDate::currentDate();
    out << "Gregorian: " << cd.toString(Qt::ISODate) << endl;
    out << "Julian: " << cd.toJulianDay() << endl;

    return 0;
}
