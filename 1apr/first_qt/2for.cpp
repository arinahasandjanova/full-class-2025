#include <QTextStream>

int main(){
    QTextStream out(stdout);
    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int puncts = 0;
    QString str = "16 students in tthe 223 group";
    foreach(QChar s, str){
        if(s.isDigit()){
            digits++;
        }
        if(s.isLetter()){
            letters++;
        }
        if(s.isSpace()){
            spaces++;
        }
        if(s.isPunct()){
            puncts++;
        }
    }
    out << QString("There are %1 characters").arg(str.count()) << endl;
    out << QString("There are %1 digits").arg(digits) << endl;
    out << QString("There are %1 letters").arg(letters) << endl;
    out << QString("There are %1 spaces").arg(spaces) << endl;
    out << QString("There are %1 punction characterss").arg(puncts) << endl;


    return 0;
}
