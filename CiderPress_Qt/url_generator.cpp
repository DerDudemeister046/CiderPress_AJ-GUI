#include "url_generator.h"
URL_Generator::URL_Generator()
{
    this->table = "/xml/getobject";

    this->host = settings->readHost();
    this->port = settings->readPort();
    this->pwd = settings->readPassword();
}

URL_Generator::URL_Generator(QString host, QString port, QString pwd, QString table)
{
    this->host = host;
    this->port = port;
    this->pwd = pwd;
    this->table = table;
}

// GET-Methods

QString URL_Generator::getHost()
{
    return host;
}

QString URL_Generator::getPort()
{
    return port;
}

QString URL_Generator::getPWD()
{
    return pwd;
}

QString URL_Generator::getTable()
{
    return table;
}

// SET-Methods

void URL_Generator::setHost(QString host)
{
    this->host = host;
}

void URL_Generator::setPort(QString port)
{
    this->port = port;
}

void URL_Generator::setPWD(QString pwd)
{
    this->pwd = pwd;
}

void URL_Generator::setTable(QString table)
{
    this->table = table;
}

// Class Functions

/*
 * Returns basic static information
 * root element: <generalinformation>
 */
QString URL_Generator::getInformationURL()
{
    QString url = "http://";
    url += getHost() + ":" + getPort() + "/xml/information.xml?password=" + getPWD();
    qDebug() << "Information_URL: " << url;
    return url;
}

/*
 * Generates a Session and returns it
 * duration of session is 30 sec.
 * root element: <applejuice>
 */
QString URL_Generator::getSessionID_URL()
{
    QString url = "http://";
    url += getHost() + ":" + getPort() + "/xml/getsession.xml?password=" + getPWD();
    qDebug() << "SessionID_URL: " << url;
    return url;
}
