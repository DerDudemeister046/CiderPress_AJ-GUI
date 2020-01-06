#include "core_communicator.h"

Core_Communicator::Core_Communicator()
{
    qDebug() << "Core Communicator loaded...";
    coreCommunicationStart();
    qDebug() << "Core communication started...";
}

QString Core_Communicator::getSessionID()
{
    return sessionID;
}

void Core_Communicator::setSessionID(QString sessionID)
{
    this->sessionID = sessionID;
}

void Core_Communicator::coreCommunicationStart()
{
    get(getSessionID_URL());
}
