#include <QTextStream>
#include <QStringList>

int main(){
    QTextStream out(stdout);
    QString faculties = "Прикмат,Эконом,Физфак,Химфак,Филфак,Психи";
    QStringList msu = faculties.split(",");
    QStringListIterator it(msu);
    while(it.hasNext()){
        out << it.next().trimmed() << endl;
    }

    return 0;
}
