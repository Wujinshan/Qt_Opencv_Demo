#include "VideoWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VideoWidget w;
    w.show();
    return a.exec();
}
