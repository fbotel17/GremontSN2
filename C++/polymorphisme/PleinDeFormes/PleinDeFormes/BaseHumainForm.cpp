#include "BaseHumainForm.h"
#include "Etudiant.h"
#include "ProfesseurForm.h" // Ajouter l'inclusion du fichier d'en-t�te de ProfesseurForm
#include <qdebug.h>


BaseHumainForm::BaseHumainForm(QWidget* parent)
	:QWidget(parent)
{
	containerLayout = new QVBoxLayout(this);
	setLayout(containerLayout);
	form = nullptr;
}

void BaseHumainForm::display(ActiveForm formMode)
{
	if (form != nullptr)
	{
		form->deleteLater();
		form = nullptr;
	}
	if (formMode == ETUDIANT)
	{
		form = new EtudiantForm();
		form->generateForm(this, containerLayout);
	}
	else if (formMode == PROF)
	{
		qDebug() << "Creating ProfesseurForm...";
		form = new ProfesseurForm();
		form->generateForm(this, containerLayout);

	}
}
