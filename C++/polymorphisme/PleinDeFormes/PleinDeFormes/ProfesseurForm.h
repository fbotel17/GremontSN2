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

	// D�clarations des membres pour les champs ajout�s
	QTableWidget* matieresEnseigneesTableWidget;
	QLineEdit* tarifHoraireLineEdit;

	// D�claration de la fonction generateForm
	virtual void generateForm(QWidget* parent, QLayout* container);

public slots:
	// Ajoutez vos slots si n�cessaire

private slots:

private:
	// Ajoutez vos membres priv�s si n�cessaire
};

