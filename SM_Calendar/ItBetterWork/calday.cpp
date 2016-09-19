#include "calday.h"
#include "ui_calday.h"

calday::calday(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calday)
{
    ui->setupUi(this);
}

calday::~calday()
{
    delete ui;
}
