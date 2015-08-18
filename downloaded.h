#ifndef DOWNLOADED_H
#define DOWNLOADED_H

#include <QDialog>

namespace Ui {
class Downloaded;
}

class Downloaded : public QDialog
{
    Q_OBJECT

public:
    explicit Downloaded(QWidget *parent = 0);
    ~Downloaded();

private:
    Ui::Downloaded *ui;
};

#endif // DOWNLOADED_H
