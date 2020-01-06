#ifndef SETTINGS_READER_H
#define SETTINGS_READER_H

#include "xml_manager.h"

class Settings_Reader : public XML_Manager
{
public:
    Settings_Reader();
    bool checkFile();
    QString readHost();
    QString readPort();
    QString readPassword();
};

#endif // SETTINGS_READER_H
