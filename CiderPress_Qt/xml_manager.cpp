#include "xml_manager.h"

XML_Manager::XML_Manager()
{

}

XML_Manager::~XML_Manager()
{

}

// GET

QString XML_Manager::getFilename()
{
    return filename;
}

// SET

void XML_Manager::setFilename(QString filename)
{
    this->filename = filename;
}
