/*#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "QT version: " << qVersion() << "\n";

    return a.exec();
}*/
#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString a = "love";
    a.append(" MSU");
    a.prepend("I ");
    out << a << endl;
    out << "The string has " << a.count() << " symbols " << endl;
    out << a.toUpper() << endl;
    out << a.toLower() << endl;

    return 0;
}
