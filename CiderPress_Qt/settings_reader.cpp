#include "settings_reader.h"

Settings_Reader::Settings_Reader()
{

}

// Class functions

QString Settings_Reader::readHost()
{
    QString host;

    QFile file;
    file.setFileName("settings.xml");
    QDomDocument doc;
    QDomElement root;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "ERROR:" << file.fileName() << " cannot be opened";
    }
    else
    {
        qDebug() << "SUCCESS: File opened";
        if(!doc.setContent(&file))
        {
            qDebug() << "ERROR: Failed to load document: " << file.fileName() ;
        }
        qDebug() << "SUCCESS: document " << file.fileName() <<" opened successfully";
        file.close();
    }

    qDebug() << "Reading host from " << file.fileName();

    root = doc.firstChildElement();
    host = readChild(root, "ajcore", "host");
    return host;
}

QString Settings_Reader::readPort()
{
    QString port;

    QFile file;
    file.setFileName("settings.xml");
    QDomDocument doc;
    QDomElement root;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "ERROR:" << file.fileName() << " cannot be opened";
    }
    else
    {
        qDebug() << "SUCCESS: File opened";
        if(!doc.setContent(&file))
        {
            qDebug() << "ERROR: Failed to load document: " << file.fileName() ;
        }
        qDebug() << "SUCCESS: document " << file.fileName() <<" opened successfully";
        file.close();
    }

    qDebug() << "Reading port from " << file.fileName();
    root = doc.firstChildElement();

    port = readChild(root, "ajcore", "port");

    return port;
}

QString Settings_Reader::readPassword()
{
    QString pwd;

    QFile file;
    file.setFileName("settings.xml");
    QDomDocument doc;
    QDomElement root;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "ERROR:" << file.fileName() << " cannot be opened";
    }
    else
    {
        qDebug() << "SUCCESS: File opened";
        if(!doc.setContent(&file))
        {
            qDebug() << "ERROR: Failed to load document: " << file.fileName() ;
        }
        qDebug() << "SUCCESS: document " << file.fileName() <<" opened successfully";
        file.close();
    }

    qDebug() << "Reading password from " << file.fileName();
    root = doc.firstChildElement();

    pwd = readChild(root, "ajcore", "password");

    return pwd;
}
