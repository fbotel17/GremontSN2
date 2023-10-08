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


    QString affichage = ""; // Déclaration de la variable ici

    for (int index = 0; index < pile.getHauteur(); ++index) {
        int element = pile.getPile(index);
        // Convertissez l'élément en chaîne de caractères pour l'ajouter à la chaîne d'affichage.
        QString elementStr = QString::number(element);
        affichage += elementStr + "\n";
    }

    // Définissez le texte de votre widget avec la chaîne d'affichage complète.
    ui->afficheEmpile->setText(affichage);
}

void PileWidget::empiler() {
    QString contenuTexte = ui->valeurEmpile->text();

    // Essayez de convertir le contenu en un entier (vous pouvez utiliser .toInt())
    bool conversionOk;
    int valeur = contenuTexte.toInt(&conversionOk);
    QString valNew = QString::number(valeur);


    // Vérifiez si la conversion a réussi
    if (conversionOk) {
        // Vérifiez d'abord si la pile est pleine
        if (!pile.pleine()) {
            // Si la pile n'est pas pleine, empilez la valeur
            pile.empile(valeur);

            // Affichez la pile mise à jour
            afficheEmpile();
            ui->message->setText("Valeur ajoutée : " + valNew);


            // Réinitialisez le champ de texte
            ui->valeurEmpile->clear();
        } else {
            // La pile est pleine, affichez un message d'erreur
            ui->message->setText("Votre pile est pleine");
        }
    } else {
        // Gérez l'erreur de conversion ici si nécessaire
    }
}

void PileWidget::depiler() {

    // Vérifiez d'abord si la pile est vide
    if (!pile.vide()) {
        int valSup = pile.depile();
        QString valeurSup = QString::number(valSup);

        afficheEmpile();

        ui->message->setText("Valeur supprimée : " + valeurSup);
    } else {
        // La pile est vide, affichez un message d'erreur ou un message indiquant qu'elle est vide
        ui->message->setText("La pile est vide");
    }
}


