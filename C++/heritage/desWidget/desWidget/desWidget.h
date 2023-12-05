#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_desWidget.h"
#include "de.h"
#include "Dehisto.h"

class desWidget : public QMainWindow
{
    Q_OBJECT
private:
	de *deX;
	Dehisto *dehistoX;
	int valTiree;
	int scoreTotal;

public:
    desWidget(QWidget *parent = nullptr);
    ~desWidget();
	void lancerDe();
	void afficheScore();
	void afficheScoreTot();
	void remiseZero();
	void lancerDehisto();
	void afficheScoreDehisto();
	void lancerNDehisto();

private:
    Ui::desWidgetClass ui;
};
