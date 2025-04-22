#include <QTextStream>
#include <QDate>


int main(){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    QList<QDate> dates({QDate(2024, 2, 29),
                        QDate(2023, 2, 29),
                        QDate(2025, 4, 31)});
    for(int i = 0; i != dates.size(); ++i){
        if(dates.at(i).isValid()){
            out << "Date " << i + 1 << " is valid" << endl;
        } else {
            out << "Date " << i + 1 << " is NOT valid" << endl;
        }
    }

    return 0;
}
