#include "mainwindow.h"
#include <QApplication>

//-----
#include <QSettings>
#include <QDebug>
#include "server_widget.h"
#include "settings_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Settings_Widget s;
    s.show();
    //Server_Widget s;
    //s.show();
    return a.exec();
}
