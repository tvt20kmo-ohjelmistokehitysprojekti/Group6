#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QMainWindow>

namespace Ui {
class TAPAHTUMAT;
}

class TAPAHTUMAT : public QMainWindow
{
    Q_OBJECT

public:
    explicit TAPAHTUMAT(QWidget *parent = nullptr);
    ~TAPAHTUMAT();

private slots:
    void on_btnNostoTakaisin_clicked();

    void on_btnTapahtumatRefresh_clicked();

private:
    Ui::TAPAHTUMAT *ui;
};

#endif // TAPAHTUMAT_H
