#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_poly.h"

class poly : public QMainWindow
{
    Q_OBJECT

public:
    poly(QWidget *parent = nullptr);
    ~poly();

private:
    Ui::polyClass ui;
};
