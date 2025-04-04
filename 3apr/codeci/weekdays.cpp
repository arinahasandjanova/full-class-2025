#include <QTextStream>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate cd = QDate::currentDate();
    int nd = cd.dayOfWeek();
    QLocale loc;
    out << QDate::shortDayName(nd) << endl;
    out << QDate::longDayName(nd) << endl;

    return 0;
}
