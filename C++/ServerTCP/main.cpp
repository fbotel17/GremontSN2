#include <QCoreApplication>
#include <ServerTCP.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ServerQT server;
    server.startServer(1069);

    return a.exec();
}
