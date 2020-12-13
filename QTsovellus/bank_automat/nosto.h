#ifndef NOSTO_H
#define NOSTO_H

#include <QMainWindow>

namespace Ui {
class NOSTO;
}

class NOSTO : public QMainWindow
{
    Q_OBJECT

public:
    explicit NOSTO(QWidget *parent = nullptr);
    ~NOSTO();

private slots:
    void on_btnNostoTakaisin_clicked();

    void on_btnNostoMuu_clicked();

    void on_btnNosto20_clicked();

    void on_btnNosto40_clicked();

    void on_btnNosto60_clicked();

    void on_btnNosto80_clicked();

    void on_btnNosto100_clicked();

private:
    Ui::NOSTO *ui;

};

#endif // NOSTO_H
