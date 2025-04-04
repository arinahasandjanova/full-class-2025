#include <QTextStream>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate cd = QDate::currentDate();
    out << cd.toString("yyyy-MM-dd") << endl;
    out << cd.toString("yy/M/dd") << endl;
    out << cd.toString("d. M. yyyy") << endl;
    out << cd.toString("d-MMMM-yyyy") << endl;

    return 0;
}
