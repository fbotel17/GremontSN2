#include "desWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    desWidget w;
	w.setStyleSheet("background-color: rgb(173, 216, 230);");
    w.show();
    return a.exec();
}
