#ifndef DOWNLOADING_H
#define DOWNLOADING_H

#include <QDialog>

namespace Ui {
class Downloading;
}

class Downloading : public QDialog
{
    Q_OBJECT

public:
    explicit Downloading(QWidget *parent = 0);
    ~Downloading();

private:
    Ui::Downloading *ui;
};

#endif // DOWNLOADING_H
