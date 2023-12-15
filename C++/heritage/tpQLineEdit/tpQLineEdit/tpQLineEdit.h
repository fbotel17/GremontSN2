#ifndef TPQLINEEDIT_H
#define TPQLINEEDIT_H

#include <QMainWindow>
#include "ui_tpQLineEdit.h"
#include "QLineEdit_Histo.h"
#include <QLineEdit>
#include <QPlainTextEdit>

class tpQLineEdit : public QMainWindow
{
	Q_OBJECT

public:
	tpQLineEdit(QWidget *parent = Q_NULLPTR);
	~tpQLineEdit();

private slots:
	void afficherHistorique();

private:
	Ui::tpQLineEditClass ui;
	QLineEdit_Histo* dynamicLineEdit;
	QPlainTextEdit* historiqueTextEdit;
};

#endif // TPQLINEEDIT_H
