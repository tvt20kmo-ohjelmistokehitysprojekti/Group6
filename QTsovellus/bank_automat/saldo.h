#ifndef SALDO_H
#define SALDO_H

#include <QMainWindow>

namespace Ui {
class Saldo;
}

class Saldo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = nullptr);
    ~Saldo();

private:
    Ui::Saldo *ui;
};

#endif // SALDO_H
