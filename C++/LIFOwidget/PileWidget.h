#ifndef PILEWIDGET_H
#define PILEWIDGET_H

#include "pile_entier.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PileWidget; }
QT_END_NAMESPACE

class PileWidget : public QMainWindow
{
    Q_OBJECT

private:
    pile_entier pile;

public:
    PileWidget(QWidget *parent = nullptr);
    ~PileWidget();

private:
    Ui::PileWidget *ui;

public slots:
    void afficheEmpile();
    void empiler();
    void depiler();
};
#endif // PILEWIDGET_H
