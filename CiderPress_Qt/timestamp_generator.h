#ifndef TIMESTAMP_GENERATOR_H
#define TIMESTAMP_GENERATOR_H

#include <QtCore>
#include <QTime>
#include <QDate>
#include <QDebug>

class Timestamp_Generator
{
public:
    Timestamp_Generator();
    uint getTimestamp();
    //QDateTime convertToRealTime();
};

#endif // TIMESTAMP_GENERATOR_H
