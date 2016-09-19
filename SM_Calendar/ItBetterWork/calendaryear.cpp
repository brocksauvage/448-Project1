#include "calendaryear.h"
#include "ui_calendaryear.h"

calendaryear::calendaryear(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calendaryear)
{
    ui->setupUi(this);
}

calendaryear::~calendaryear()
{
    delete ui;
}
