#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_PleinDeFormes.h"
#include "Etudiant.h"
#include "ActiveForm.h"


class PleinDeFormes : public QMainWindow
{
    Q_OBJECT

    ActiveForm mode;

private slots:
    void onToggleRadioButton(bool checked);
	void onSubmitButton();

public:
    PleinDeFormes(QWidget *parent = nullptr);
    ~PleinDeFormes();
	void PleinDeFormes::insertIntoDatabase(const QString& nom, const QString& prenom, const QString& adresse, int age, const QString& telephone, const QString& email, const QString& tableName, const QStringList& matieres);


private:
    Ui::PleinDeFormesClass ui;
};
