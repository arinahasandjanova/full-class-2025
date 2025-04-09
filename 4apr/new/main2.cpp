#include <QTextStream>
#include <QDateTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDateTime cdt = QDateTime::currentDateTime();
    out << cdt.toString() << endl;
    out << cdt.date().toString() << endl;
    out << cdt.time().toString() << endl;

    return 0;
}
