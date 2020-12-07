#ifndef NOSTOCONFIRM_H
#define NOSTOCONFIRM_H

#include <QDialog>

namespace Ui {
class nostoConfirm;
}

class nostoConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit nostoConfirm(QString value, QWidget *parent = nullptr);
    ~nostoConfirm();

private slots:


    void on_buttonBoxConfirm_accepted();

    void on_buttonBoxConfirm_rejected();

private:
    Ui::nostoConfirm *ui;
};

#endif // NOSTOCONFIRM_H
