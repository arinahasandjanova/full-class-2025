#include <QTextStream>
#include <QDate>

int main(){
    QTextStream out(stdout);
    out.setCodec("CP866");
    QDate dt(2025, 6, 1);
    QDate nd = dt.addDays(42);
    QDate academ(2025, 6, 30);
    out << "42 days from " << dt.toString() << " is " << nd.toString() << endl;
    out << "There are " << QDate::currentDate().daysTo(academ) << " days till end" << endl;

    return 0;
}
