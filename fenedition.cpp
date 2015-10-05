#include "fenedition.h"
#include "ui_fenedition.h"
#include "fenstart.h"
#include "ui_fenstart.h"

FenEdition::FenEdition(QWidget *parent) : //constructeur de la fenête d'édition
    QWidget(parent),
    ui(new Ui::FenEdition)
{
    ui->setupUi(this);
}

FenEdition::~FenEdition() //destructeur de la fenêtre d'édition
{
    delete ui;
}


//SLOTS associés au clic sur les boutons


void FenEdition::on_boutonPlayPause_clicked() //permet de passer du bouton play au bouton pause et inversement, lors d'un clic.
{
    if (ui->boutonPlayPause->text() == "Play")
    {
        ui->boutonPlayPause->setStyleSheet("QPushButton{border-image : url(:/images/MesImages/pauseoff.png) 0 0 0 0 stretch stretch; border-width : 0px; background-position : center; min-width : 70px; max-width : 70px; min-height : 70px; max-height : 70px; color : transparent;}");
        ui->boutonPlayPause->setText("Pause");
    }

    else
    {
        ui->boutonPlayPause->setStyleSheet("QPushButton{border-image : url(:/images/MesImages/playoff.png) 0 0 0 0 stretch stretch; border-width : 0px; background-position : center; min-width : 70px; max-width : 70px; min-height : 70px; max-height : 70px; color : transparent;}");
        ui->boutonPlayPause->setText("Play");
    }
}

void FenEdition::on_boutonSonOn_clicked() //permet de couper le son
{
    if (ui->boutonSonOn->text() == "son_on")
    {
        ui->boutonSonOn->setStyleSheet("QPushButton{border-width : 0px; background-position : center; min-width : 70px; max-width : 70px; min-height : 70px; max-height : 70px; color : black;}");
        ui->boutonSonOn->setText("son_off");
    }

    else
    {
        ui->boutonSonOn->setStyleSheet("QPushButton{border-image : url(:/images/MesImages/volume.png) 0 0 0 0 stretch stretch; border-width : 0px; background-position : center; min-width : 70px; max-width : 70px; min-height : 70px; max-height : 70px; color : transparent;}");
        ui->boutonSonOn->setText("son_on");
    }
}


//SLOTS de changement de page
void FenEdition::on_boutonRetourArriere_clicked() //Pour passer de la fenêtre édition à la fenêtre de démarrage
{
    FenStart *fenetreDemarrage;
    fenetreDemarrage = new FenStart;
    fenetreDemarrage->show();
    this->hide();
}
