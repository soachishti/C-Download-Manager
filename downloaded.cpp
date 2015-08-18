#include "downloaded.h"
#include "ui_downloaded.h"

Downloaded::Downloaded(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Downloaded)
{
    ui->setupUi(this);
}

Downloaded::~Downloaded()
{
    delete ui;
}
