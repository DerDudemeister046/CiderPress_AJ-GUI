#include "mainwindow.h"
#include <QApplication>

//-----
#include "server_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    Server_Widget s;
    s.show();
    return a.exec();
}
