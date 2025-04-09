#include <QTextStream>
#include <QFileInfo>

int main(int argc, char* argv[]){
    QTextStream out(stdout);
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    if(!QFile(filename).exists()){
        qWarning("File doesn't exist");
        return -1;
    }
    QFileInfo fileinfo(filename);
    qint64 size = fileinfo.size();
    QString str = "The file size is %1 bytes";
    out << str.arg(size) <<endl;

    return 0;
}
