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
    matiereNoteTableView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed | QAbstractItemView::AnyKeyPressed);
    topLayout->addWidget(matiereNoteTableView);
    addAllocatedObject(matiereNoteTableView);

    classeComboBox = new QComboBox();
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

    // Vérifier si la dernière ligne est modifiée
    if (matiereListModel->rowCount() - 1 == topLeft.row())
    {
        // Récupérer le texte de la dernière ligne
        QString text = matiereListModel->data(topLeft).toString();

        // Si la dernière ligne est vide, et qu'il y a plus d'une ligne dans la liste, la supprimer
        if (text.isEmpty() && matiereListModel->rowCount() > 1)
        {
            matiereListModel->removeRow(matiereListModel->rowCount() - 1);
        }
        // Si la dernière ligne n'est pas vide, ajouter une nouvelle ligne vide
        else if (!text.isEmpty())
        {
            matiereListModel->insertRow(matiereListModel->rowCount());
        }
    }
}

