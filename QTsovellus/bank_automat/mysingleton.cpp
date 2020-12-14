#include "mysingleton.h"

MySingleton* MySingleton::instance = nullptr;

QString MySingleton::getIdaccounts() const
{
    return idaccounts;
}

void MySingleton::setIdaccounts(const QString &value)
{
    idaccounts = value;
}

QString MySingleton::getPassword() const
{
    return password;
}

void MySingleton::setPassword(const QString &value)
{
    password = value;
}

QString MySingleton::getAmount() const
{
    return amount;
}

void MySingleton::setAmount(const QString &value)
{
    amount = value;
}

MySingleton* MySingleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new MySingleton();
    }

    return instance;
}

