#ifndef SALDO_H
#define SALDO_H

#include <QMainWindow>

namespace Ui {
class SALDO;
}

class SALDO : public QMainWindow
{
    Q_OBJECT

public:
    explicit SALDO(QWidget *parent = nullptr);
    ~SALDO();

private slots:
    void on_btnNostoTakaisin_clicked();

private:
    Ui::SALDO *ui;
};

#endif // SALDO_H
