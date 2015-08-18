#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QItemDelegate>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_clearAll_clicked();

    void on_addUrlBtn_clicked();

    void on_actionAbout_triggered();

    void on_actionSettings_triggered();

    void on_actionAdd_URL_triggered();

    void on_actionDownloaded_File_triggered();

    void on_actionDownloading_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *dataModel;
};

#endif // MAINWINDOW_H
