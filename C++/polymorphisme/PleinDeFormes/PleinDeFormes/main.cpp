#include "PleinDeFormes.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PleinDeFormes w;
    w.show();
    return a.exec();
}
