#ifndef MAINWINDOWKIRJAUDUTTU_H
#define MAINWINDOWKIRJAUDUTTU_H

#include <QMainWindow>

namespace Ui {
class MainWindowKirjauduttu;
}

class MainWindowKirjauduttu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowKirjauduttu(QWidget *parent = nullptr);
    ~MainWindowKirjauduttu();

private slots:
    void on_btnNosto_clicked();

    void on_btnSaldo_clicked();

    void on_btnTapahtumat_clicked();

    void on_btnKirjUlos_clicked();

private:
    Ui::MainWindowKirjauduttu *ui;

};

#endif // MAINWINDOWKIRJAUDUTTU_H
