#include <QTextStream>
#include <QTime>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("CP866");
    QDate dt1(2025, 4, 11);
    QDate dt2(2026, 4, 1);
    if(dt1 < dt2){
        out << dt1.toString() << " comes before " << dt2.toString() << endl;
    } else {
        out << dt2.toString() << " comes before " << dt1.toString() << endl;
    }

    return 0;
}
