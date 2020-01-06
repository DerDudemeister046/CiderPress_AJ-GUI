#include "ciderpress_gui.h"

#include <QApplication>
#include "settings_widget.h"




#include "url_generator.h"
#include "settings_reader.h"
#include <QDebug>


#include "xml_manager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Settings_Reader *sr = new Settings_Reader;
    //qDebug() << "HOST: " << sr->readHost() << ":" << sr->readPort();
    URL_Generator *url = new URL_Generator;
    url->getSessionID_URL();
    url->getInformationURL();

    //    CiderPress_Gui w;
//    w.show();
    return a.exec();
}
