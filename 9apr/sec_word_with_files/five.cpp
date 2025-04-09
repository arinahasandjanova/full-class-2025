#include <QTextStream>
#include <QDir>

int main(){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    QDir dir;
    if(dir.mkdir("msubaku")){
        out << "msubaku directory created" << endl;
    }
    dir.mkdir("prikmat");
    if(dir.exists("prikmat")){
        dir.rename("prikmat", "prikmat 2 kurs");
    }
    dir.mkpath("msu/baku/prikmat");

    return 0;
}
