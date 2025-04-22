#include <QTextStream>
#include <QDateTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDateTime cdt = QDateTime::currentDateTime();
    out << "UTC" << cdt.toUTC().toString() << endl;
    out << "Local" << cdt.toLocalTime().toString() << endl;


    return 0;
}
