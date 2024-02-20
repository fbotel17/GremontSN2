// ProfesseurForm.cpp

#include "ProfesseurForm.h"
#include <QStringListModel>



void ProfesseurForm::generateForm(QWidget* parent, QLayout* container)
{
	Form::generateForm(parent, container);

	QLayout* topLayout = new QHBoxLayout();
	addAllocatedObject(topLayout);
	QLayout* bottomLayout = new QHBoxLayout();
	addAllocatedObject(bottomLayout);

	container->addItem(topLayout);
	container->addItem(bottomLayout);

	QLabel* labelMatiere = new QLabel("Liste des mati�res suivies : ");
	topLayout->addWidget(labelMatiere);
	addAllocatedObject(labelMatiere);
}



// Autres fonctions et slots, si n�cessaires, peuvent �tre ajout�s ici
