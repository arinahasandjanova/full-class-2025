#include <QTextStream>
const int STR_EQUAL = 0;

int main(){
    QTextStream out(stdout);
    QString a = "MSU";
    QString b = "msu";
    QString c = "msu\n";

    if(QString::compare(a, b) == STR_EQUAL){
        out << "a, b are equal" << endl;
    } else {
        out << "a, b are NOT equal" << endl;
    }
    out << "No case regarded" << endl;

    if(QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL){
        out << "a, b are equal" << endl;
    } else {
        out << "a, b are NOT equal" << endl;
    }

    if(QString::compare(b, c) == STR_EQUAL){
        out << "b, c are equal" << endl;
    } else {
        out << "b, c are NOT equal" << endl;
    }
    c.chop(1);
    out << "After last character" << endl;

    if(QString::compare(b, c) == STR_EQUAL){
        out << "b, c are equal" << endl;
    } else {
        out << "b, c are NOT equal" << endl;
    }

    return 0;
}
