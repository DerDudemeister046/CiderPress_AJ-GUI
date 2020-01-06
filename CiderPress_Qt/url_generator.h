#ifndef URL_GENERATOR_H
#define URL_GENERATOR_H

#include <QObject>
#include <QDebug>

#include "settings_reader.h"
#include "timestamp_generator.h"

class URL_Generator
{
private:
    Timestamp_Generator *timestamp;
    Settings_Reader *settings;
    QString host;   // host to get XML File from
    QString port;   // port to communicate with host
    QString pwd;    // password as md5 hash
    QString table;  // table to get from core
public:
    URL_Generator();
    URL_Generator(QString host, QString port, QString pwd, QString table);
    // GET-Methods
    QString getHost();
    QString getPort();
    QString getPWD();
    QString getTable();
    // SET-Methods
    void setHost(QString host);
    void setPort(QString port);
    void setPWD(QString pwd);
    void setTable(QString table);
    // Class Functions
    QString getInformationURL();
    QString getSessionID_URL();
    QString getModified_URL(QString sessionID, QString filter, uint timestamp);
};

#endif // URL_GENERATOR_H
