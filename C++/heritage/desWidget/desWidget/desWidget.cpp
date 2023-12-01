#include "desWidget.h"
#include "de.h"

desWidget::desWidget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	// Création d'une action
	QAction *actionChoix1 = new QAction("Choix 1", this);
	connect(actionChoix1, &QAction::triggered, this, &desWidget::onChoix1);

	QAction *actionChoix2 = new QAction("Choix 2", this);
	connect(actionChoix2, &QAction::triggered, this, &desWidget::onChoix2);

	// Création d'un menu
	QMenu *menu = menuBar()->addMenu("Mon Menu");
	menu->addAction(actionChoix1);

	// Ajout d'une séparation entre les choix
	menu->addSeparator();

	menu->addAction(actionChoix2);

	valTiree = 0;
	connect(ui.boutonLancerDe, &QPushButton::clicked, this, &desWidget::lancerDe);
	connect(ui.afficheDe, &QPushButton::clicked, this, &desWidget::afficheScore);
	connect(ui.scoreTot, &QPushButton::clicked, this, &desWidget::afficheScoreTot);
	connect(ui.remiseZero, &QPushButton::clicked, this, &desWidget::remiseZero);

}

desWidget::~desWidget()
{}

void onChoix1()
{
	// Code à exécuter pour le choix 1
}

void onChoix2()
{
	// Code à exécuter pour le choix 2
}




void desWidget::lancerDe() {
	if (deX == nullptr) {
		deX = new de();
	}
	else {
		(*deX)++;
	}
	 
}

void desWidget::afficheScore() {
	valTiree += (*deX);
	ui.labelResultat->setText(QString("valeur du de : ") + QString::number(valTiree));

}

void desWidget::afficheScoreTot() {
	scoreTotal < (*deX);
	ui.afficheScore->setText(QString("score total : ") + QString::number(scoreTotal));

}

void desWidget::remiseZero() {
	(*deX)=0;
	scoreTotal < (*deX);
	ui.afficheScore->setText(QString("score total : ") + QString::number(scoreTotal));

}

