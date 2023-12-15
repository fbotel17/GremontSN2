#ifndef QLINEEDIT_HISTO_H
#define QLINEEDIT_HISTO_H

#include <QLineEdit>
#include <QList>

class QLineEdit_Histo : public QLineEdit {
	Q_OBJECT

public:
	explicit QLineEdit_Histo(QWidget *parent = nullptr, int maxHistorySize = 10);

	void ajouter();
	QStringList historique() const;
	void effacer();

signals:
	void texteAjoute(); // Signal émis lorsqu'un texte est ajouté

private slots:
	void enregistrerTexte();

private:
	QStringList texte_histo;
	int maxHistorySize;
};

#endif // QLINEEDIT_HISTO_H
