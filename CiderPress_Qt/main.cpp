#include "ciderpress_gui.h"

#include <QApplication>
#include "settings_widget.h"



#include "core_communicator.h"

#include <QDebug>


#include "xml_manager.h"
#include "request_manager.h"
#include "url_generator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Settings_Reader *sr = new Settings_Reader;
    //qDebug() << "HOST: " << sr->readHost() << ":" << sr->readPort();
    //URL_Generator *url = new URL_Generator;
    //url->getSessionID_URL();
    //url->getInformationURL();

    Core_Communicator *cc = new Core_Communicator;
    //cc->coreCommunicationStart();
    //    CiderPress_Gui w;
    //    w.show();
    return a.exec();
}
