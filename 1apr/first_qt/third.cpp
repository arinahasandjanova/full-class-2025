#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString str1 = "I love MSU";
    out << str1 << endl;
    QString str2("MSU loves me");
    out << str2 << endl;
    std::string s1 = "MSU loves nobody";
    QString str3 = s1.c_str();
    out << str3 << endl;
    std::string s2 = "akadem love";
    QString str4 = QString::fromLatin1(s2.data(), s2.size());
    out << str4 << endl;
    char s3[] = "akadem for no one";
    QString str5(s3);
    out << str5 << endl;


    return 0;
}
