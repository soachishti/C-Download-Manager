#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addurl.h"
#include "settings.h"
#include "about.h"
#include "downloaded.h"
#include "downloading.h"
#include "filemanagement.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->filesInfo->setRowCount(0);
    ui->filesInfo->setColumnCount(6);

    ui->filesInfo->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    QStringList lst;
    lst.append("Name");
    lst.append("Status");
    lst.append("Speed");
    lst.append("Size");
    lst.append("Downloaded in");
    lst.append("Added Date");
    ui->filesInfo->setHorizontalHeaderLabels(lst);

    ui->filesInfo->setRowCount(1);
    //Add Table items here
    ui->filesInfo->setItem(0,0,new QTableWidgetItem("Python.msi"));
    ui->filesInfo->setItem(0,1,new QTableWidgetItem("Completed"));
    ui->filesInfo->setItem(0,2,new QTableWidgetItem("132.11 KBytes/s"));
    ui->filesInfo->setItem(0,3,new QTableWidgetItem("28.61 MB"));
    ui->filesInfo->setItem(0,4,new QTableWidgetItem("0:2:30"));
    ui->filesInfo->setItem(0,5,new QTableWidgetItem("Last day"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clearAll_clicked()
{
    // Delete downloaded items.
    // Show download warning as well
}

void MainWindow::on_addUrlBtn_clicked()
{
    AddUrl a;
    a.setModal(true);
    a.exec();
}

void MainWindow::on_actionAbout_triggered()
{
    About s;
    s.setModal(true);
    s.exec();
}

void MainWindow::on_actionSettings_triggered()
{
    Settings s;
    s.setModal(true);
    s.exec();
}

void MainWindow::on_actionAdd_URL_triggered()
{
    AddUrl a;
    a.setModal(true);
    a.exec();
}

void MainWindow::on_actionDownloaded_File_triggered()
{
    Downloaded a;
    a.setModal(true);
    a.exec();
}

void MainWindow::on_actionDownloading_triggered()
{
    Downloading a;
    a.setModal(true);
    a.exec();
}
