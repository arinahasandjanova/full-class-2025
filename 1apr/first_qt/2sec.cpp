#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString str = "MSU Baku branch";
    foreach (QChar qc, str){
        out << qc << " ";
    }
    out << endl;
    for (QChar *it = str.begin(); it != str.end(); ++it){
        out << *it << " ";
    }
    out << endl;
    for (int i = 0; i< str.size(); ++i){
        out << str.at(i) << " ";
    }
    out << endl;

    return 0;
}
