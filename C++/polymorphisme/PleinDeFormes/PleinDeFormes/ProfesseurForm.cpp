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

	QLabel* labelMatiere = new QLabel("Liste des matières suivies : ");
	topLayout->addWidget(labelMatiere);
	addAllocatedObject(labelMatiere);
}



// Autres fonctions et slots, si nécessaires, peuvent être ajoutés ici
