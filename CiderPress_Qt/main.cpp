#include "ciderpress_gui.h"

#include <QApplication>
#include "settings_widget.h"




#include "url_generator.h"




#include "xml_manager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    URL_Generator* url = new URL_Generator("HOST", "PORT", "PWD", "TABLE");
    url->getSessionID_URL();
 //   CiderPress_Gui w;
 //   w.show();
    return a.exec();
}
