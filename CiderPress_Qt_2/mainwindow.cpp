#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serverWidget = new Server_Widget();

    ui->mdiArea->tileSubWindows();
    serverWidget->setWindowFlag(Qt::FramelessWindowHint);
    ui->mdiArea->addSubWindow(serverWidget);

    //Server_Widget *s = new Server_Widget(this);
    //ui->centralwidget->layout()->addWidget(s);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setnew()
{
}


void MainWindow::on_server_btn_clicked()
{
}
