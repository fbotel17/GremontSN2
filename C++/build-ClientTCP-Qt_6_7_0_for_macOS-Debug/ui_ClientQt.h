/********************************************************************************
** Form generated from reading UI file 'ClientQt.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTQT_H
#define UI_CLIENTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientQt
{
public:
    QWidget *centralwidget;
    QPushButton *connect;
    QLineEdit *IPLineEdit;
    QLineEdit *portLineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *disconnect;
    QLabel *connectionStatusLabel;
    QPushButton *envoi;
    QTextEdit *contenuMess;
    QPushButton *celcius;
    QPushButton *fara;
    QPushButton *hyg;
    QLineEdit *numCapteur;
    QLabel *reponseServ;
    QLabel *messErreur;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientQt)
    {
        if (ClientQt->objectName().isEmpty())
            ClientQt->setObjectName("ClientQt");
        ClientQt->resize(800, 600);
        centralwidget = new QWidget(ClientQt);
        centralwidget->setObjectName("centralwidget");
        connect = new QPushButton(centralwidget);
        connect->setObjectName("connect");
        connect->setGeometry(QRect(130, 160, 100, 32));
        IPLineEdit = new QLineEdit(centralwidget);
        IPLineEdit->setObjectName("IPLineEdit");
        IPLineEdit->setGeometry(QRect(130, 80, 113, 21));
        portLineEdit = new QLineEdit(centralwidget);
        portLineEdit->setObjectName("portLineEdit");
        portLineEdit->setGeometry(QRect(130, 120, 113, 21));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 80, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 120, 41, 16));
        disconnect = new QPushButton(centralwidget);
        disconnect->setObjectName("disconnect");
        disconnect->setGeometry(QRect(130, 210, 100, 32));
        connectionStatusLabel = new QLabel(centralwidget);
        connectionStatusLabel->setObjectName("connectionStatusLabel");
        connectionStatusLabel->setGeometry(QRect(270, 40, 281, 31));
        envoi = new QPushButton(centralwidget);
        envoi->setObjectName("envoi");
        envoi->setGeometry(QRect(110, 360, 141, 32));
        contenuMess = new QTextEdit(centralwidget);
        contenuMess->setObjectName("contenuMess");
        contenuMess->setGeometry(QRect(100, 290, 161, 61));
        celcius = new QPushButton(centralwidget);
        celcius->setObjectName("celcius");
        celcius->setGeometry(QRect(370, 230, 100, 32));
        fara = new QPushButton(centralwidget);
        fara->setObjectName("fara");
        fara->setGeometry(QRect(490, 230, 100, 32));
        hyg = new QPushButton(centralwidget);
        hyg->setObjectName("hyg");
        hyg->setGeometry(QRect(610, 230, 100, 32));
        numCapteur = new QLineEdit(centralwidget);
        numCapteur->setObjectName("numCapteur");
        numCapteur->setGeometry(QRect(480, 180, 113, 21));
        reponseServ = new QLabel(centralwidget);
        reponseServ->setObjectName("reponseServ");
        reponseServ->setGeometry(QRect(340, 280, 431, 71));
        messErreur = new QLabel(centralwidget);
        messErreur->setObjectName("messErreur");
        messErreur->setGeometry(QRect(360, 140, 341, 31));
        ClientQt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientQt);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        ClientQt->setMenuBar(menubar);
        statusbar = new QStatusBar(ClientQt);
        statusbar->setObjectName("statusbar");
        ClientQt->setStatusBar(statusbar);

        retranslateUi(ClientQt);
        QObject::connect(connect, SIGNAL(clicked()), ClientQt, SLOT(onConnectButtonClicked()));
        QObject::connect(disconnect, SIGNAL(clicked()), ClientQt, SLOT(onDisconnectButtonClicked()));
        QObject::connect(envoi, SIGNAL(clicked()), ClientQt, SLOT(onSendMessageButtonClicked()));
        QObject::connect(celcius, SIGNAL(clicked()), ClientQt, SLOT(onSendCelClicked()));
        QObject::connect(fara, SIGNAL(clicked()), ClientQt, SLOT(onSendFarClicked()));
        QObject::connect(hyg, SIGNAL(clicked()), ClientQt, SLOT(onSendHygClicked()));

        QMetaObject::connectSlotsByName(ClientQt);
    } // setupUi

    void retranslateUi(QMainWindow *ClientQt)
    {
        ClientQt->setWindowTitle(QCoreApplication::translate("ClientQt", "ClientQt", nullptr));
        connect->setText(QCoreApplication::translate("ClientQt", "Connexion", nullptr));
        label->setText(QCoreApplication::translate("ClientQt", "IP : ", nullptr));
        label_2->setText(QCoreApplication::translate("ClientQt", "Port :", nullptr));
        disconnect->setText(QCoreApplication::translate("ClientQt", "D\303\251connexion", nullptr));
        connectionStatusLabel->setText(QString());
        envoi->setText(QCoreApplication::translate("ClientQt", "Envoyer message", nullptr));
        celcius->setText(QCoreApplication::translate("ClientQt", "\302\260C", nullptr));
        fara->setText(QCoreApplication::translate("ClientQt", "\302\260F", nullptr));
        hyg->setText(QCoreApplication::translate("ClientQt", "Hygrom\303\251trie", nullptr));
        reponseServ->setText(QString());
        messErreur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientQt: public Ui_ClientQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTQT_H