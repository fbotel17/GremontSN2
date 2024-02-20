#pragma once
#include "Form.h"
#include <QComboBox>
#include <QTableView>
#include <QLabel>
#include <QStringListModel>
#include <QTextEdit>  // N'oublie pas d'inclure QTextEdit


class EtudiantForm : public Form
{
    Q_OBJECT

        QTableView* matiereNoteTableView;
    QComboBox* classeComboBox;
    QStringListModel* matiereListModel;

public:
    virtual void generateForm(QWidget* parent, QLayout* container);


private slots:
    void onDataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles);
};

