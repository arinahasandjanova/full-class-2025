#include <QTextStream>
#include <QFileInfo>
#include <QDir>

int main(int argc, char* argv[]){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString directory = argv[1];
    QDir dir(directory);
    if(!dir.exists()){
        qWarning("Directory doesn't exist");
        return -1;
    }
    dir.setFilter(QDir::Files|QDir::AllDirs);
    dir.setSorting(QDir::Size|QDir::Reversed);
    QFileInfoList list = dir.entryInfoList();
    int max_size = 0;
    foreach(QFileInfo finfo, list){
        QString name = finfo.fileName();
        int size = name.size();
        if(size > max_size){
            max_size = size;
        }
    }
    int len = max_size + 2;
    out << QString("Filename|").leftJustified(len + 1).append("Bytes") << endl;
    for(int i = 0; i < list.size(); ++i){
        QFileInfo fileInfo = list.at(i);
        QString str = fileInfo.fileName().leftJustified(len + 1);
        str.append(QString("%1").arg(fileInfo.size()));
        out << str << endl;
    }

    return 0;
}
