#include <QTextStream>
#include <QDate>
#include <QTime>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QList<int> years({2020, 2021, 2022, 2023, 2024, 2025});
    foreach(int year, years){
        if(QDate::isLeapYear(year)){
            out << year << QString(" : високосный") << endl;
        } else {
            out << year << QString(" : не високосный") << endl;
        }
    }

    return 0;
}
