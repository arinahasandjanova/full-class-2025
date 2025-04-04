#include <QTextStream>
#include <QTime>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("CP866");
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    out << cd.toString() << " " << ct.toString() << endl;

    return 0;
}
