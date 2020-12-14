#ifndef NOSTOMUUSUMMA_H
#define NOSTOMUUSUMMA_H

#include <QDialog>

namespace Ui {
class nostoMuuSumma;
}

class nostoMuuSumma : public QDialog
{
    Q_OBJECT

public:
    explicit nostoMuuSumma(QWidget *parent = nullptr);
    ~nostoMuuSumma();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::nostoMuuSumma *ui;
};

#endif // NOSTOMUUSUMMA_H
