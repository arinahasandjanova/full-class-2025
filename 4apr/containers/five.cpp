#include <QTextStream>
#include <QMap>
#include <QList>
int main(){
    QTextStream out(stdout);
    QMap<QString, int> students = {{"Прикмат", 60},
                                   {"Физфак", 10},
                                   {"Химфак", 10},
                                   {"Эконом", 30},
                                   {"Филфак", 40},
                                   {"Психи", 40}};
    students.insert(QString("Журфак"), 0);
    QList<int> values = students.values();
    out << "Values: " << endl;
    for(int val: values){
        out << val << endl;
    }
    QList<QString> keys = students.keys();
    out << "Keys: " << endl;
    for(QString key: keys){
        out << key << endl;
    }
    QMapIterator<QString, int> it(students);
    out << "Pairs: " << endl;
    while(it.hasNext()){
        it.next();
        out << it.key() << " : " << it.value() << endl;
    }


    return 0;
}
