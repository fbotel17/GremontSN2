#ifndef PILEWIDGET_H
#define PILEWIDGET_H


#include <QWidget>
#include "pile_entier.h"

class PileWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PileWidget(QWidget *parent = nullptr);

private slots:
    void empilerClicked();
    void depilerClicked();

private:
    pile_entier m

#endif // PILEWIDGET_H
