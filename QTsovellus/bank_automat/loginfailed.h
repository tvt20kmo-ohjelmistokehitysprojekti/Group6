#ifndef LOGINFAILED_H
#define LOGINFAILED_H

#include <QWidget>

namespace Ui {
class loginfailed;
}

class loginfailed : public QWidget
{
    Q_OBJECT

public:
    explicit loginfailed(QWidget *parent = nullptr);
    ~loginfailed();

private slots:
    void on_btnLoginFailedOK_clicked();

private:
    Ui::loginfailed *ui;
};

#endif // LOGINFAILED_H
