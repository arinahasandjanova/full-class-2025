#include <QTextStream>

int main(){
    QTextStream out(stdout);
    /*QString s1 = "MSU Baku";
    QString s2 = "MSU Baku\n";
    QString s3 = "MSU Baku ";
    QString s4 = "МГУ Баку";
    out << s1.length() << " " << s1.count() << " " << s1.size() << endl;
    out << s2.length() << " " << s2.count() << " " << s2.size() << endl;
    out << s3.length() << " " << s3.count() << " " << s3.size() << endl;
    out << s4.length() << " " << s4.count() << " " << s4.size() << endl;*/

    QString s1 = "There are %1 white roses";
    int n = 12;
    out << s1.arg(n) << endl;
    QString s2 = "There will be %1 akadems";
    double a = 999.0;
    out << s2.arg(a) << endl;
    QString s3 = "We will send %1 and %2 to akadem";
    QString name1 = "D";
    QString name2 = "B";
    out << s3.arg(name1).arg(name2) << endl;

    return 0;
}
