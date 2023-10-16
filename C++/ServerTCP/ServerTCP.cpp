#include "ServerTCP.h"
#include <QDebug>
#include <QRandomGenerator>

ServerQT::ServerQT(QObject *parent) : QObject(parent) {
    server = new QTcpServer(this);

    QObject::connect(server, &QTcpServer::newConnection, this, &ServerQT::onServerNewConnection);
}

void ServerQT::startServer(int port) {
    if (server->listen(QHostAddress::Any, port)) {
        qDebug() << "Server is running on port ";
    } else {
        qDebug() << "Server failed to start. Error: " << server->errorString();
    }
}

void ServerQT::onServerNewConnection() {
    QTcpSocket *client = server->nextPendingConnection();
    QObject::connect(client, &QTcpSocket::disconnected, this, &ServerQT::onClientDisconnected);
    QObject::connect(client, &QTcpSocket::readyRead, this, &ServerQT::onClientReadyRead);
}

void ServerQT::onClientDisconnected() {
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    if (client) {
        qDebug() << "Client disconnected";
        client->deleteLater();
    }
}

void ServerQT::onClientReadyRead() {
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    if (client) {
        QByteArray data = client->readAll();
        QString request(data);

    }
}
