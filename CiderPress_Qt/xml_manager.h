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

class XML_Manager
{
public:
    // constructor & destructor
    XML_Manager();
    ~XML_Manager();
    // GET
    QString getFilename();
    // SET
    void setFilename(QString filename);
    // Class functions
    // Checker functions
private:
    QString filename; // name of the file to be read or written to.
};

#endif // XML_MANAGER_H
