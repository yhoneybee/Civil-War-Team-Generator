#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CivilWarTeamGenerator.h"

class CivilWarTeamGenerator : public QMainWindow
{
    Q_OBJECT

public:
    CivilWarTeamGenerator(QWidget *parent = Q_NULLPTR);

private:
    Ui::CivilWarTeamGeneratorClass ui;
};
