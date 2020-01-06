#ifndef CORE_COMMUNICATOR_H
#define CORE_COMMUNICATOR_H

#include <QtCore>
#include <QDebug>

#include "xml_manager.h"
#include "url_generator.h"
#include "request_manager.h"

class Core_Communicator : public XML_Manager, public URL_Generator, public Request_Manager
{
public:
    Core_Communicator();
    // GET-Methods
    QString getSessionID();
    // SET-Methods
    void setSessionID(QString sessionID);
    // Class functions
    void coreCommunicationStart();
private:
    QString sessionID;
};

#endif // CORE_COMMUNICATOR_H
