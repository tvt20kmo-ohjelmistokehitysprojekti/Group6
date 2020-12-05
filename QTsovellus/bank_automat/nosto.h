#ifndef NOSTO_H
#define NOSTO_H

#include <QMainWindow>

namespace Ui {
class Nosto;
}

class Nosto : public QMainWindow
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = nullptr);
    ~Nosto();

private:
    Ui::Nosto *ui;
};

#endif // NOSTO_H
