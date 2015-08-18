#ifndef ADDURL_H
#define ADDURL_H

#include <QDialog>

namespace Ui {
class AddUrl;
}

class AddUrl : public QDialog
{
    Q_OBJECT

public:
    explicit AddUrl(QWidget *parent = 0);
    ~AddUrl();

private:
    Ui::AddUrl *ui;
};

#endif // ADDURL_H
