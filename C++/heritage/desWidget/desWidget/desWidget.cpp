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
	// Cr�ez une instance de votre classe de d� (de)
	de monDe;

	// Obtenez la valeur du d�
	int valeurDe = monDe.lancerDe();

	// Affichez la valeur dans le label
	ui.labelResultat->setText(QString("D� ") + QString::number(valeurDe));
}
