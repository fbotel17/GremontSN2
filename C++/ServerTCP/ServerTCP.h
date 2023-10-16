#ifndef SERVERQT_H
#define SERVERQT_H


#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QRandomGenerator>

class ServerQT : public QObject
{
    Q_OBJECT

public:
    ServerQT(QObject *parent = nullptr);
    void startServer(int port); // Déclaration de la fonction

public slots:
    void onServerNewConnection();
    void onClientDisconnected();
    void onClientReadyRead();

private:
    QTcpServer *server;
};


#endif // SERVERQT_H
