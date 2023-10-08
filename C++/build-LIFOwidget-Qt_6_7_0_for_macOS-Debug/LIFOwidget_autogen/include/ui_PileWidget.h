/********************************************************************************
** Form generated from reading UI file 'PileWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PILEWIDGET_H
#define UI_PILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PileWidget
{
public:
    QWidget *centralwidget;
    QLabel *afficheEmpile;
    QLineEdit *valeurEmpile;
    QLabel *label;
    QPushButton *bouttonEmpile;
    QLabel *message;
    QPushButton *bouttonDepile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PileWidget)
    {
        if (PileWidget->objectName().isEmpty())
            PileWidget->setObjectName("PileWidget");
        PileWidget->resize(800, 600);
        centralwidget = new QWidget(PileWidget);
        centralwidget->setObjectName("centralwidget");
        afficheEmpile = new QLabel(centralwidget);
        afficheEmpile->setObjectName("afficheEmpile");
        afficheEmpile->setGeometry(QRect(510, -10, 91, 311));
        valeurEmpile = new QLineEdit(centralwidget);
        valeurEmpile->setObjectName("valeurEmpile");
        valeurEmpile->setGeometry(QRect(60, 40, 113, 21));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 181, 16));
        bouttonEmpile = new QPushButton(centralwidget);
        bouttonEmpile->setObjectName("bouttonEmpile");
        bouttonEmpile->setGeometry(QRect(60, 70, 100, 32));
        message = new QLabel(centralwidget);
        message->setObjectName("message");
        message->setGeometry(QRect(240, 30, 231, 41));
        bouttonDepile = new QPushButton(centralwidget);
        bouttonDepile->setObjectName("bouttonDepile");
        bouttonDepile->setGeometry(QRect(60, 160, 100, 32));
        PileWidget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PileWidget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        PileWidget->setMenuBar(menubar);
        statusbar = new QStatusBar(PileWidget);
        statusbar->setObjectName("statusbar");
        PileWidget->setStatusBar(statusbar);

        retranslateUi(PileWidget);
        QObject::connect(bouttonEmpile, SIGNAL(clicked()), PileWidget, SLOT(empiler()));
        QObject::connect(bouttonDepile, SIGNAL(clicked()), PileWidget, SLOT(depiler()));

        QMetaObject::connectSlotsByName(PileWidget);
    } // setupUi

    void retranslateUi(QMainWindow *PileWidget)
    {
        PileWidget->setWindowTitle(QCoreApplication::translate("PileWidget", "PileWidget", nullptr));
        afficheEmpile->setText(QString());
        valeurEmpile->setInputMask(QString());
        label->setText(QCoreApplication::translate("PileWidget", "Entrez une valeur \303\240 empiler :", nullptr));
        bouttonEmpile->setText(QCoreApplication::translate("PileWidget", "Empiler", nullptr));
        message->setText(QString());
        bouttonDepile->setText(QCoreApplication::translate("PileWidget", "Depiler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PileWidget: public Ui_PileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILEWIDGET_H
