#include "ciderpress_gui.h"

#include <QApplication>
#include "settings_widget.h"





#include "xml_manager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CiderPress_Gui w;
    w.show();
    return a.exec();
}
