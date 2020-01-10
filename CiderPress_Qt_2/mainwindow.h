#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//-----
#include "server_widget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setnew();

private:
    Ui::MainWindow *ui;
    Server_Widget *serverWidget;
};
#endif // MAINWINDOW_H
