#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_desWidget.h"

class desWidget : public QMainWindow
{
    Q_OBJECT

public:
    desWidget(QWidget *parent = nullptr);
    ~desWidget();
	void lancerDe();

private:
    Ui::desWidgetClass ui;
};
