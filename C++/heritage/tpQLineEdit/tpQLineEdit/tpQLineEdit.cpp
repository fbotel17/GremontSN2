#include "tpQLineEdit.h"
#include <QPushButton>


tpQLineEdit::tpQLineEdit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// Créer dynamiquement un objet QLineEdit_Histo
	dynamicLineEdit = new QLineEdit_Histo(this);

	// Définir la position et la taille
	dynamicLineEdit->setGeometry(15, 50, 100, 20);

	// Créer le QPlainTextEdit pour afficher l'historique
	historiqueTextEdit = new QPlainTextEdit(this);
	historiqueTextEdit->setGeometry(15, 80, 315, 150);

	// Connecter le signal texteAjoute de QLineEdit_Histo au slot afficherHistorique
	connect(dynamicLineEdit, &QLineEdit_Histo::texteAjoute, this, &tpQLineEdit::afficherHistorique);

	// Créer le bouton pour réinitialiser l'historique
	QPushButton* reinitButton = new QPushButton("Reinitialiser Historique", this);
	reinitButton->setGeometry(15, 250, 150, 30);
	connect(reinitButton, &QPushButton::clicked, dynamicLineEdit, &QLineEdit_Histo::effacer);
	connect(reinitButton, &QPushButton::clicked, this, &tpQLineEdit::afficherHistorique);
}

tpQLineEdit::~tpQLineEdit()
{
}

void tpQLineEdit::afficherHistorique() {
	QStringList historique = dynamicLineEdit->historique();
	historiqueTextEdit->clear();
	historiqueTextEdit->setPlainText(historique.join("\n"));
}
