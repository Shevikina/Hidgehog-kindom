#include "hedgehogkindom.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HedgehogKindom w;
    w.show();
     QFile qss(":/style.qss");
     qss.open(QFile::ReadOnly);
     QString styleSheet = QString::fromLatin1(qss.readAll());
     qApp->setStyleSheet(styleSheet);
    return a.exec();
}
