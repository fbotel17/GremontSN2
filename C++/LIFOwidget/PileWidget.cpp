#include "PileWidget.h"
#include "pile_entier.h"
#include "./ui_PileWidget.h"

PileWidget::PileWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PileWidget)
    , pile(20)
{
    ui->setupUi(this);
}

PileWidget::~PileWidget()
{
    delete ui;
}

void PileWidget::afficheEmpile() {


    QString affichage = "";

    //boucle pour récupérer toutes les donées de la file
    for (int index = 0; index < pile.getHauteur(); ++index) {
        int element = pile.getPile(index);
        QString elementStr = QString::number(element);
        affichage += elementStr + "\n";
    }

    //fait en sorte que le texte s'affiche en haut de la "div"
    ui->afficheEmpile->setAlignment(Qt::AlignTop);
    ui->afficheEmpile->setText(affichage);
}

void PileWidget::empiler() {
    //récupère le contenu de l'entrée utilisateur
    QString contenuTexte = ui->valeurEmpile->text();

    bool conversionOk;
    int valeur = contenuTexte.toInt(&conversionOk);
    QString valNew = QString::number(valeur);


    if (conversionOk) {
        if (!pile.pleine()) {
            pile.empile(valeur);

            afficheEmpile();
            ui->message->setText("Valeur ajoutée : " + valNew);


            ui->valeurEmpile->clear();
        } else {
            ui->message->setText("Votre file est pleine");
        }
    } else {
        ui->message->setText("Votre valeur n'est pas un entier");
        ui->valeurEmpile->clear();

    }
}

void PileWidget::depiler() {

    if (!pile.vide()) {
        int valSup = pile.depile();
        QString valeurSup = QString::number(valSup);

        afficheEmpile();

        ui->message->setText("Valeur supprimée : " + valeurSup);
    } else {
        ui->message->setText("La file est vide");
    }
}


