#ifndef POETRY_H
#define POETRY_H

#include <QString>
#include <QStringList>
#include <QTime>
#include <QRandomGenerator>

class poetry
{
public:
    poetry();
    static QString getRandomPoetry();
    static const QStringList poetries;
};

#endif // POETRY_H
