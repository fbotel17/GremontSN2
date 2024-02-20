#include "EtudiantForm.h"
#include <QStringListModel>

void EtudiantForm::generateForm(QWidget* parent, QLayout* container)
{
    Form::generateForm(parent, container);

    QLayout* topLayout = new QHBoxLayout();
    addAllocatedObject(topLayout);
    QLayout* bottomLayout = new QHBoxLayout();
    addAllocatedObject(bottomLayout);

    container->addItem(topLayout);
    container->addItem(bottomLayout);

    QLabel* labelMatiere = new QLabel("Liste des matières suivies : ");
    topLayout->addWidget(labelMatiere);
    addAllocatedObject(labelMatiere);

    matiereListModel = new QStringListModel();
    matiereNoteTableView = new QTableView();
    matiereNoteTableView->setModel(matiereListModel);
    matiereNoteTableView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed );
    topLayout->addWidget(matiereNoteTableView);
    addAllocatedObject(matiereNoteTableView);

    classeComboBox = new QComboBox();
	classeComboBox->addItem("SN1");
	classeComboBox->addItem("SN2");
	classeComboBox->addItem("E1");
	classeComboBox->addItem("E2");
    bottomLayout->addWidget(classeComboBox);
    addAllocatedObject(classeComboBox);

    labelMatiere->setParent(parent);
    matiereNoteTableView->setParent(parent);
    classeComboBox->setParent(parent);

    labelMatiere->show();
    matiereNoteTableView->show();
    classeComboBox->show();

    // Ajouter les matières initiales
    QStringList matieres;
    matieres << ""; // Ajouter une ligne vide initiale
    matiereListModel->setStringList(matieres);

    // Connecter le signal dataChanged du modèle à une fonction de gestion
    connect(matiereListModel, &QStringListModel::dataChanged, this, &EtudiantForm::onDataChanged);
}

void EtudiantForm::onDataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight, const QVector<int> &roles)
{
	Q_UNUSED(bottomRight)
		Q_UNUSED(roles)

		// Vérifier si la modification provient de l'utilisateur
		if (topLeft.isValid() && topLeft.flags() & Qt::ItemIsUserCheckable)
		{
			// Vérifier si toutes les lignes sont vides
			bool allRowsEmpty = true;
			for (int row = 0; row < matiereListModel->rowCount(); ++row)
			{
				QString text = matiereListModel->index(row, 0).data().toString();
				if (!text.isEmpty())
				{
					allRowsEmpty = false;
					break;
				}
			}

			// Supprimer la dernière ligne vide uniquement si toutes les lignes sont vides
			if (allRowsEmpty && matiereListModel->rowCount() > 1)
			{
				matiereListModel->removeRow(matiereListModel->rowCount() - 1);
			}
			// Ajouter une nouvelle ligne vide si la dernière ligne n'est pas vide
			else if (!allRowsEmpty)
			{
				matiereListModel->insertRow(matiereListModel->rowCount());
			}
		}
}


