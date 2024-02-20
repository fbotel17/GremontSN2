#include "PleinDeFormes.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <qdebug.h>
#include <QStandardItemModel>
#include <QtSql/QSqlError>



PleinDeFormes::PleinDeFormes(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    mode = NONE;

    connect(ui.ProfButton,&QRadioButton::toggled,this,&PleinDeFormes::onToggleRadioButton);
    connect(ui.EtudButton, &QRadioButton::toggled, this, &PleinDeFormes::onToggleRadioButton);
	connect(ui.okBtn, &QRadioButton::clicked, this, &PleinDeFormes::onSubmitButton);

	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("192.168.64.213");  // Met le nom de ton serveur MySQL
	db.setDatabaseName("poly");
	db.setUserName("root");
	db.setPassword("root");

	if (db.open()) {
		qDebug() << "Connexion à la base de données établie";
	}
}

PleinDeFormes::~PleinDeFormes()
{}

void PleinDeFormes::onToggleRadioButton(bool checked)
{
    QObject* obj = sender();
    if (checked)
    {
        if (obj == ui.ProfButton && mode != PROF)
        {
            ui.widget->display(PROF);
        }
        else if (obj == ui.EtudButton && mode != ETUDIANT)
        {
            ui.widget->display(ETUDIANT);
        }
    }
}


void PleinDeFormes::onSubmitButton()
{
	QString nameHumain = ui.NameEdit->text();
	QString firstNameHumain = ui.FirstNameEdit->text();
	QString adresse1Humain = ui.AdresseEdit->text();
	QString adresse2Humain = ui.AdresseEdit2->text();
	QString adresse3Humain = ui.AdresseEdit3->text();
	QString ageHumain = ui.AgeEdit->text();
	QString phoneHumain = ui.PhoneEdit->text();
	QString emailHumain = ui.MailEdit->text();
	

	QString adresse = adresse1Humain + " " + adresse2Humain + " " + adresse3Humain;

	QStringList classeValue;

	QComboBox* classeComboBox = nullptr;
	QWidget* etudiantFormWidget = ui.widget->findChild<QWidget*>("EtudiantForm");
	if (etudiantFormWidget) {
		// Recherche du QComboBox à l'intérieur du widget EtudiantForm
		classeComboBox = etudiantFormWidget->findChild<QComboBox*>("classeComboBox");
	}

	if (classeComboBox) {
		QString classeValue = classeComboBox->currentText();
		// Utilisez classeValue comme nécessaire
	}
	else {
		qDebug() << "Le QComboBox n'a pas été trouvé dans le widget EtudiantForm.";
	}



	QStringList matieres;  

	QTableView* tableView = ui.widget->findChild<QTableView*>();
	if (tableView) {
		QAbstractItemModel* model = tableView->model();

		if (model) {
			
			for (int row = 0; row < model->rowCount(); ++row) {
				QModelIndex index = model->index(row, 0);  
				QString matiere = model->data(index).toString();
				matieres << matiere;
			}
		}
		else {
			qDebug() << "Le modèle de la table des matières n'est pas disponible.";
		}
	}
	else {
		qDebug() << "La table des matières n'a pas été trouvée dans le widget.";
	}


	if (ui.EtudButton->isChecked()) {
		insertIntoDatabase(nameHumain, firstNameHumain, adresse, ageHumain.toInt(), phoneHumain, emailHumain, "etudiant", matieres, classeValue);
	}
	else if (ui.ProfButton->isChecked()) {
		insertIntoDatabaseProf(nameHumain, firstNameHumain, adresse, ageHumain.toInt(), phoneHumain, emailHumain, "professeur");
	}
}

void PleinDeFormes::insertIntoDatabase(const QString& nom, const QString& prenom, const QString& adresse, int age, const QString& telephone, const QString& email, const QString& tableName, const QStringList& matieres, const QStringList& classeValue)
{
	QSqlQuery query;
	query.prepare("INSERT INTO " + tableName + " (nom, prenom, adresse, age, telephone, email, classe) VALUES (?, ?, ?, ?, ?, ?, ?)");
	query.addBindValue(nom);
	query.addBindValue(prenom);
	query.addBindValue(adresse);
	query.addBindValue(age);
	query.addBindValue(telephone);
	query.addBindValue(email);
	query.addBindValue(classeValue);

	if (query.exec()) {
		qDebug() << "Enregistrement réussi dans la table " << tableName;

		// Récupérer l'id de l'étudiant nouvellement inséré
		int idEtudiant = query.lastInsertId().toInt();

		// Insérer les matières dans la table MatiereEtudiant
		QSqlQuery matiereQuery;
		matiereQuery.prepare("INSERT INTO MatiereEtudiant (idEtudiant, matiere) VALUES (:idEtudiant, :matiere)");
		matiereQuery.bindValue(":idEtudiant", idEtudiant);

		for (const QString& matiere : matieres) {
			matiereQuery.bindValue(":matiere", matiere);
			matiereQuery.exec();
		}

		qDebug() << "Matieres insérées dans la table MatiereEtudiant";
	}
	else {
		qCritical() << "Erreur lors de l'enregistrement dans la table " << tableName << " : " << query.lastError().text();
	}
}

void PleinDeFormes::insertIntoDatabaseProf(const QString& nom, const QString& prenom, const QString& adresse, int age, const QString& telephone, const QString& email, const QString& tableName)
{
	QSqlQuery query;
	query.prepare("INSERT INTO " + tableName + " (nom, prenom, adresse, age, telephone, email) VALUES (?, ?, ?, ?, ?, ?)");
	query.addBindValue(nom);
	query.addBindValue(prenom);
	query.addBindValue(adresse);
	query.addBindValue(age);
	query.addBindValue(telephone);
	query.addBindValue(email);

	if (query.exec()) {
		qDebug() << "Enregistrement réussi dans la table " << tableName;

	}
	else {
		qCritical() << "Erreur lors de l'enregistrement dans la table " << tableName << " : " << query.lastError().text();
	}
}
