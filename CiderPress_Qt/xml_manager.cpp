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

// Class functions

bool XML_Manager::initialize()
{
    return false;
}


// Testing functions
void XML_Manager::test()
{    
    qDebug() << "Create Document";
    setFilename("test.xml");
    QDomDocument doc(getFilename());
    QFile file(getFilename());

    root = doc.createElement("settings");
    doc.appendChild(root);

    QDomElement tag = doc.createElement("ajcore");
    root.appendChild(tag);

    QDomElement tag2 = doc.createElement("folders");
    root.appendChild(tag2);

    QDomElement tag3 = doc.createElement("connection");
    tag2.appendChild(tag3);

    QDomText t = doc.createTextNode("Test Text");
    tag.appendChild(t);
    tag2.appendChild(t);
    tag3.appendChild(t);




    QString xml = doc.toString();
    qDebug() << "XML: " << xml;


}
