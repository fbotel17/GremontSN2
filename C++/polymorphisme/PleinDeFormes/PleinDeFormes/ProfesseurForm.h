#pragma once
#include "Form.h"

#include <QTableWidget>
#include <QLineEdit>
#include <QLabel>


class ProfesseurForm :
	public Form
{
	Q_OBJECT

public:

	// Déclarations des membres pour les champs ajoutés
	QTableWidget* matieresEnseigneesTableWidget;
	QLineEdit* tarifHoraireLineEdit;

	// Déclaration de la fonction generateForm
	virtual void generateForm(QWidget* parent, QLayout* container);

public slots:
	// Ajoutez vos slots si nécessaire

private slots:

private:
	// Ajoutez vos membres privés si nécessaire
};

