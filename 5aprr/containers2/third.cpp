#include <QTextStream>
#include <QFile>

int main(){
    QTextStream out(stdout);
    QFile file("/home/stud-12/Desktop/arina/full-class-2025/5apr/containers2/text.txt");
    if(!file.open(QIODevice::ReadOnly)){
        qWarning("Can not open file for reading");
        return -1;
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        out << line <<endl;
    }
    file.close();

    return 0;
}
