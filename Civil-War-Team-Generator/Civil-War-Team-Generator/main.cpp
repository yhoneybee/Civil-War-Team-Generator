#include "CivilWarTeamGenerator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CivilWarTeamGenerator w;
    w.show();
    return a.exec();
}
