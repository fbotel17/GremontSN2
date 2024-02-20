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

    QLabel* labelMatiere = new QLabel("Liste des mati�res suivies : ");
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

    // Ajouter les mati�res initiales
    QStringList matieres;
    matieres << ""; // Ajouter une ligne vide initiale
    matiereListModel->setStringList(matieres);

    // Connecter le signal dataChanged du mod�le � une fonction de gestion
    connect(matiereListModel, &QStringListModel::dataChanged, this, &EtudiantForm::onDataChanged);
}

void EtudiantForm::onDataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight, const QVector<int> &roles)
{
    Q_UNUSED(bottomRight)
    Q_UNUSED(roles)

    // V�rifier si la derni�re ligne est modifi�e
    if (matiereListModel->rowCount() - 1 == topLeft.row())
    {
        // R�cup�rer le texte de la derni�re ligne
        QString text = matiereListModel->data(topLeft).toString();

        // Si la derni�re ligne est vide, et qu'il y a plus d'une ligne dans la liste, la supprimer
        if (text.isEmpty() && matiereListModel->rowCount() > 1)
        {
            matiereListModel->removeRow(matiereListModel->rowCount() - 1);
        }
        // Si la derni�re ligne n'est pas vide, ajouter une nouvelle ligne vide
        else if (!text.isEmpty())
        {
            matiereListModel->insertRow(matiereListModel->rowCount());
        }
    }
}

