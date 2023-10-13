#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Initialisation de la base de données
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.64.213"); // Adresse du serveur MySQL
    db.setDatabaseName("Faustin");    // Nom de la base de données
    db.setUserName("root");           // Nom d'utilisateur
    db.setPassword("root");           // Mot de passe


    return a.exec();
}
