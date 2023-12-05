#include "desWidget.h"
#include "de.h"
#include "Dehisto.h"

desWidget::desWidget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);


	valTiree = 0;
	connect(ui.boutonLancerDe, &QPushButton::clicked, this, &desWidget::lancerDe);
	connect(ui.afficheDe, &QPushButton::clicked, this, &desWidget::afficheScore);
	connect(ui.scoreTot, &QPushButton::clicked, this, &desWidget::afficheScoreTot);
	connect(ui.remiseZero, &QPushButton::clicked, this, &desWidget::remiseZero);
	connect(ui.tirerDehisto, &QPushButton::clicked, this, &desWidget::lancerDehisto);
	connect(ui.afficherDehisto, &QPushButton::clicked, this, &desWidget::afficheScoreDehisto);
	connect(ui.tirerNDehisto, &QPushButton::clicked, this, &desWidget::lancerNDehisto);

	



}

desWidget::~desWidget()
{}

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

void desWidget::lancerDehisto()
{
	
	if (dehistoX == nullptr) {
		dehistoX = new Dehisto();
		valTiree += (*dehistoX);

		for (int i = 0; i < ui.tableWidget->rowCount() - 1; ++i) {
			QTableWidgetItem *item = ui.tableWidget->takeItem(i + 1, 0); // Prenez l'élément de la ligne suivante
			ui.tableWidget->setItem(i, 0, item); // Placez l'élément dans la ligne actuelle
		}

		// Ajoutez la nouvelle valeur dans la dernière ligne
		ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::number(valTiree)));
	}
	else {
		dehistoX->jet();
		valTiree += (*dehistoX);
		// Ajoutez la valeur dans le QTableWidget
		for (int i = 0; i < ui.tableWidget->rowCount() - 1; ++i) {
			QTableWidgetItem *item = ui.tableWidget->takeItem(i + 1, 0); // Prenez l'élément de la ligne suivante
			ui.tableWidget->setItem(i, 0, item); // Placez l'élément dans la ligne actuelle
		}

		// Ajoutez la nouvelle valeur dans la dernière ligne
		ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::number(valTiree)));
		
	}
}

void desWidget::afficheScoreDehisto()
{
	
	ui.afficheDehisto->setText(QString("valeur du de : ") + QString::number(valTiree));
}

void desWidget::lancerNDehisto()
{

	
	dehistoX->jet();
	valTiree += (*dehistoX);
	// Ajoutez la valeur dans le QTableWidget
	for (int i = 0; i < ui.tableWidget->rowCount() - 1; ++i) {
		QTableWidgetItem *item = ui.tableWidget->takeItem(i + 1, 0); // Prenez l'élément de la ligne suivante
		ui.tableWidget->setItem(i, 0, item); // Placez l'élément dans la ligne actuelle
	}

	// Ajoutez la nouvelle valeur dans la dernière ligne
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::number(valTiree)));

}

