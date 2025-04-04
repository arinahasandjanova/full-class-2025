#include <QTextStream>
#include <QTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QTime ct = QTime::currentTime();
    out << ct.toString("hh:mm.ss.zzz") << endl;
    out << QLocale("Russian").toString(ct, "h:m:s a") << endl;
    out << QLocale("Russian").toString(ct, "H:m:s A") << endl;
    out << QLocale("Russian").toString(ct, "h:m AP") << endl;

    return 0;
}
