#ifndef MD5_GENERATOR_H
#define MD5_GENERATOR_H

#include <QtCore>
#include <QCryptographicHash>

class MD5_Generator
{
public:
    MD5_Generator();
    QString generateHash(QString password);
};

#endif // MD5_GENERATOR_H
