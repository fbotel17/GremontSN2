#include "QLineEdit_Histo.h"

QLineEdit_Histo::QLineEdit_Histo(QWidget *parent, int maxHistorySize)
	: QLineEdit(parent), maxHistorySize(maxHistorySize) {
	connect(this, &QLineEdit::returnPressed, this, &QLineEdit_Histo::enregistrerTexte);
}

void QLineEdit_Histo::ajouter() {
	QString currentText = text();
	if (!currentText.isEmpty()) {
		if (texte_histo.size() >= maxHistorySize) {
			texte_histo.pop_front(); // Supprimer le plus ancien s'il dépasse la taille maximale
		}
		texte_histo.append(currentText);
		clear();
		emit texteAjoute(); // Émettre le signal lorsqu'un texte est ajouté
	}
}

QStringList QLineEdit_Histo::historique() const {
	return texte_histo;
}

void QLineEdit_Histo::effacer() {
	texte_histo.clear();
}

void QLineEdit_Histo::enregistrerTexte() {
	ajouter();
}
