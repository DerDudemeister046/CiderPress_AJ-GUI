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
    QDomDocument getDocument();
    QDomElement getRoot();
    QString getFilename();              // returns filename of file
    // SET
    void setDocument(QDomDocument document);
    void setRoot(QDomElement root);
    void setFilename(QString filename); // set name of file to be read/writen from/to
    // Class functions
    void test();    // Testing function to be deleted in final version

    bool initialize();  // initialization of XML_Manager, sets values, checks file availability
    // Checker functions
private:
    QDomDocument document;  // xml document handle
    QDomElement root;       // root element of document
    QString filename;       // name of the file to be read or written to.
};

#endif // XML_MANAGER_H
