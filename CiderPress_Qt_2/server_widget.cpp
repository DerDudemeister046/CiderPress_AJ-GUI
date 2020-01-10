#include "server_widget.h"
#include "ui_server_widget.h"

Server_Widget::Server_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server_Widget)
{
    ui->setupUi(this);
}

Server_Widget::~Server_Widget()
{
    delete ui;
}
