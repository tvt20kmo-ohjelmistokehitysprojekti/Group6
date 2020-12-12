#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <qstring.h>

class MySingleton
{
private:
    static MySingleton* instance;
    QString idaccounts;
    QString password;
    QString amount;

public:
    static MySingleton* getInstance();


    QString getIdaccounts() const;
    void setIdaccounts(const QString &value);
    QString getPassword() const;
    void setPassword(const QString &value);
    QString getAmount() const;
    void setAmount(const QString &value);
};

#endif // MYSINGLETON_H
