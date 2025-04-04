#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString str = "I love MSU";
    out << str.right(4) << endl;
    out << str.left(7) << endl;
    out << str.mid(4, 5) << endl;
    QString str2("Baku MSU branch");
    QStringRef sub(&str2, 0, 7);
    out << sub.toString() << endl;

    return 0;
}
