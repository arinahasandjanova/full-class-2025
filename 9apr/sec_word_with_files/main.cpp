#include <QTextStream>
#include <QFile>

int main(){
    QString filename = "/home/stud-12/Desktop/arina/full-class-2025/9apr/sec_word_with_files/file.txt";
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out << QString("Прикмат") << endl;
        out << QString("Физфак") << endl;
        out << QString("Химфак") << endl;
        out << QString("Психи") << endl;
        out << QString("Эконом") << endl;
        out << QString("Филфак") << endl;
    } else {
        qWarning("Can  not open the file");
    }
    file.close();

    return 0;
}
