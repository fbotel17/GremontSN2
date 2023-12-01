#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_desWidget.h"
#include "de.h"

class desWidget : public QMainWindow
{
    Q_OBJECT
private:
	de *deX;
	int valTiree;
	int scoreTotal;

public:
    desWidget(QWidget *parent = nullptr);
    ~desWidget();
	void lancerDe();
	void afficheScore();
	void afficheScoreTot();
	void remiseZero();

private:
    Ui::desWidgetClass ui;
};
