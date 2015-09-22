#include "fenstart.h"
#include "ui_fenstart.h"

FenStart::FenStart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FenStart)
{
    ui->setupUi(this);
}

FenStart::~FenStart()
{
    delete ui;
}
