#include <QTextStream>
#include <QList>
#include <algorithm>

int main(){
    QTextStream out(stdout);
    QList<QString> faculties = {"Прикмат", "Эконом", "Физфак", "Химфак", "Филфак", "Психи"};
    for(int i = 0; i != faculties.size(); ++i){
        out << faculties.at(i) << endl;
    }
    faculties << QString("Журфак") << QString("Истфак");
    std::sort(faculties.begin(), faculties.end());
    for(QString faculty:faculties){
        out << faculty << endl;
    }

    return 0;
}
