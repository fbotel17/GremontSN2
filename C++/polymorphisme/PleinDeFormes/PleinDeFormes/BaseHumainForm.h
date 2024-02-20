#pragma once
#include <qwidget.h>
#include <qlayout.h>
#include "Humain.h"
#include "EtudiantForm.h"
#include "ActiveForm.h"
class BaseHumainForm :
    public QWidget
{
    Q_OBJECT

        QVBoxLayout* containerLayout;
        Form* form;


public: 
    BaseHumainForm(QWidget* parent = nullptr);

    void display(ActiveForm formMode);
};


