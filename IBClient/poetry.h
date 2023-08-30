#ifndef POETRY_H
#define POETRY_H

#include <QString>
#include <QStringList>

//#include <QRandomGenerator>

class poetry
{
public:
    poetry();
    static QString getRandomPoetry(int index);
    static int getPoetryNumber();
    static const QStringList poetries;
};

#endif // POETRY_H
