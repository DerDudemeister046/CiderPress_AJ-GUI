/*
 *  Author:         Andi
 *  e-mail:         trembucker@yahoo.com
 *  Date:           19.12.2019
 *  Last_Change:    19.12.2019
 *
 */

#ifndef XML_MANAGER_H
#define XML_MANAGER_H

#include <QtCore>
#include <QFile>            // to manage files with this class
#include <QtXml>            // xml implementation
#include <QDomDocument>     // to handle xml documents

#include <QDebug>

class XML_Manager
{
public:
    // constructor & destructor
    XML_Manager();
    ~XML_Manager();
    // GET
    QString getFilename();              // returns filename of file
    QString getRootElement();           // returns string value of root element
    // SET
    void setFilename(QString filename); // set name of file to be read/writen from/to
    void setRootElement(QString rootElement);   // set stringvalue of rootelement
    // Class functions
    void test();    // Testing function to be deleted in final version

    void createChild(QDomDocument document, QDomElement root, QString childname, QStringList attributes, QStringList values); // creates a child node to be appended to the document
    QString readChild(QDomElement root, QString tag, QString attribute);

    bool initialize();  // initialization of XML_Manager, sets values, checks file availability
    // Checker functions
private:
    QString filename;       // name of the file to be read or written to.
    QString rootElement;
};

#endif // XML_MANAGER_H
