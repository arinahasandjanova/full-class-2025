#include <QTextStream>
#include <QFileInfo>

int main(int argc, char* argv[]){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QString abspath = fileinfo.absoluteFilePath();
    QString basename = fileinfo.baseName();
    QString compbasename = fileinfo.completeBaseName();
    QString fileName = fileinfo.fileName();
    QString suffix = fileinfo.suffix();
    QString compsuffix = fileinfo.completeSuffix();
    out << "Absolute file path: " << abspath << endl;
    out << "Base name: " << basename << endl;
    out << "Complete base name: " << compbasename << endl;
    out << "File name: " << fileName << endl;
    out << "Suffix: " << suffix << endl;
    out << "Complete suffix: " << compsuffix << endl;

    return 0;
}
