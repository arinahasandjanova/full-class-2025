#include <QTextStream>
#include <QVector>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QVector<int> vals={1, 2, 3, 4, 5};
    out << vals.size() << endl;
    out << vals.first() << endl;
    out << vals.last() << endl;
    vals.append(6);
    vals.prepend(0);
    for(int val: vals){
        out << val << " ";
    }
    out << endl;


    return 0;
}
