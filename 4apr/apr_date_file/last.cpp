#include <QTextStream>
#include <QDateTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    time_t t = time(0);
    out << t << endl;
    QDateTime dt;
    dt.setTime_t(t);
    out << dt.toString() << endl;
    QDateTime cd = QDateTime::currentDateTime();
    out << cd.toTime_t() << endl;

    return 0;
}
