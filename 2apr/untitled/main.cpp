#include <QTextStream>
#include <QDate>
#include <QTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("CP866");
    QDate dt1(2025, 4, 2);
    out << "Today's date " << dt1.toString() << endl;
    QDate dt2;
    dt2.setDate(2025, 7, 8);
    QTime tm1(17, 30, 12, 55);
    out << "Time is " << tm1.toString("hh:mm:ss:zzz") << endl;
    QTime tm2;
    tm2.setHMS(13, 52, 42, 777);
    out << "Time is " << tm2.toString("hh:mm:ss:zzz") << endl;
    out << "Future date " << dt2.toString() << endl;

    return 0;
}
