#include "dashintro.h"
#include "ui_dashintro.h"
#include "screen2.h"

dashIntro::dashIntro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashIntro)
{
    ui->setupUi(this);
}

dashIntro::~dashIntro()
{
    delete ui;
}

void dashIntro::on_backBtn_clicked()
{
   // screen2.show();
   // this->hide();
}
