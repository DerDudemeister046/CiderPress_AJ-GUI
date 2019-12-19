#include "ciderpress_gui.h"

#include <QApplication>
#include "xml_manager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //CiderPress_Gui w;
    //w.show();

    XML_Manager *xml = new XML_Manager;

    return a.exec();
}
