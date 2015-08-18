#include "addurl.h"
#include "ui_addurl.h"

AddUrl::AddUrl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUrl)
{
    ui->setupUi(this);
}

AddUrl::~AddUrl()
{
    delete ui;
}
