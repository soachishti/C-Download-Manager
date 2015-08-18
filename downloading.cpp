#include "downloading.h"
#include "ui_downloading.h"

Downloading::Downloading(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Downloading)
{
    ui->setupUi(this);


    ui->connInfo->setRowCount(0);
    ui->connInfo->setColumnCount(4);

    ui->connInfo->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    QStringList lst;
    lst.append("Downloaded");
    lst.append("Size");
    lst.append("Speed");
    lst.append("Status");
    ui->connInfo->setHorizontalHeaderLabels(lst);

    ui->connInfo->setRowCount(1);
    ui->connInfo->setItem(0,0,new QTableWidgetItem("1 MB"));
    ui->connInfo->setItem(0,1,new QTableWidgetItem("2.2 MB"));
    ui->connInfo->setItem(0,2,new QTableWidgetItem("30.3 KBytes/s"));
    ui->connInfo->setItem(0,2,new QTableWidgetItem("Downloading..."));

}

Downloading::~Downloading()
{
    delete ui;
}
