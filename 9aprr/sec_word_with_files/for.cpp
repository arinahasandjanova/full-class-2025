#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>

int main(int argc, char* argv[]){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QDateTime last_read = fileinfo.lastRead();
    QDateTime last_mod = fileinfo.lastModified();
    out << "Last read: " << last_read.toString() << endl;
    out << "Last modified: " << last_mod.toString() << endl;

    return 0;
}
