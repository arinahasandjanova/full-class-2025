#include <QTextStream>
#include <QList>
#include <QSet>
#include <algorithm>

int main(){
    QTextStream out(stdout);
    QSet<QString> tech = {"Прикмат", "Физфак", "Химфак"};
    QSet<QString> liber = {"Филфак", "Эконом", "Психи"};
    out << tech.size() << endl;
    liber.insert("Журфак");
    out << liber.size() << endl;
    tech.unite(liber);
    out << tech.size() << endl;
    for(QString faculty:tech){
        out << faculty << endl;
    }


    return 0;
}
