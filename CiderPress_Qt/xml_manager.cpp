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

QString XML_Manager::getRootElement()
{
    return rootElement;
}

// SET
void XML_Manager::setFilename(QString filename)
{
    this->filename = filename;
}

void XML_Manager::setRootElement(QString rootElement)
{
    this->rootElement = rootElement;
}

// Class functions

bool XML_Manager::initialize()
{
    return false;
}


// Testing functions
void XML_Manager::test()
{    
    /*
    qDebug() << "Create Document";
    setFilename("settings.xml");
    QDomDocument doc(getFilename());
    QFile file(getFilename());
    QDomElement r = doc.createElement("settings");
    doc.appendChild(r);
    //getRoot() = getDocument().createElement("settings");
    //qDebug() << "APPEND ROOT: ";
    //getDocument().appendChild(getRoot());


    QStringList a = {"host","port","password"};
    QStringList b = {"192.168.0.2", "9851", "PASSWORD"};

    createChild(doc, r, "ajcore", a, b);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "ERROR: Cant open file!";
    }
    QTextStream out(&file);
    QString xml = doc.toString();
    out << xml;
    qDebug() << "Settings file created";


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

    file.setFileName(getFilename());
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "ERROR: Cant open file!";
    }

    */

}

// Class Functions

void XML_Manager::createChild(QDomDocument document, QDomElement root, QString childname, QStringList attributes, QStringList values)
{
    QDomElement child = document.createElement(childname);
    for (int i=0; i<attributes.size(); i++)
    {
        child.setAttribute(attributes.at(i), values.at(i));
    }
    root.appendChild(child);
}

QString XML_Manager::readChild(QDomElement root, QString tag, QString attribute)
{
    QDomNodeList items = root.elementsByTagName(tag);
    QString element = "";
    for (int i = 0; i < items.count(); i++)
    {
        QDomNode itemnode = items.at(i);
        if (itemnode.isElement())
        {
            QDomElement item = itemnode.toElement();
            element = item.attribute(attribute);
        }
    }
    return element;
}
