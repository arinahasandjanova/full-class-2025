#include <QTextStream>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate ramzes2(-1303, 5, 1);
    QDate monqols(1221, 7, 28);
    int j_today = QDate::currentDate().toJulianDay();
    int j_ramzes2 = ramzes2.toJulianDay();
    int j_monqols = monqols.toJulianDay();
    out << "Days since Ramzes || " << j_today - j_ramzes2 << endl;
    out << "Days since monqols " << j_today - j_monqols << endl;

    return 0;
}
