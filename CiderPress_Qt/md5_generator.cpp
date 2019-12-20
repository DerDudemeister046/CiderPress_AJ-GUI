#include "md5_generator.h"

MD5_Generator::MD5_Generator()
{

}

QString MD5_Generator::generateHash(QString password)
{
    QCryptographicHash md5cal(QCryptographicHash::Md5);
    QByteArray input;
    input.append(password);
    md5cal.addData(input);
    return md5cal.result().toHex();
}
