#include "desWidget.h"
#include "de.h"

desWidget::desWidget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	connect(ui.boutonLancerDe, &QPushButton::clicked, this, &desWidget::lancerDe);

}

desWidget::~desWidget()
{}

void desWidget::lancerDe() {
	// Créez une instance de votre classe de dé (de)
	de monDe;

	// Obtenez la valeur du dé
	int valeurDe = monDe.lancerDe();

	// Affichez la valeur dans le label
	ui.labelResultat->setText(QString("Dé ") + QString::number(valeurDe));
}
