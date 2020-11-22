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

private:
    Ui::MainWindowKirjauduttu *ui;
};

#endif // MAINWINDOWKIRJAUDUTTU_H
