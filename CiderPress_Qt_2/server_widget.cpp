#include "server_widget.h"
#include "ui_server_widget.h"


#include <QSettings>
#include <QDebug>

Server_Widget::Server_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server_Widget)
{
    ui->setupUi(this);

    qDebug() << "SMG:->\tLoading file.";
    QSettings settings("CiderPress", "Settings-Widget");
    settings.beginGroup("CoreSettings");

    qDebug() << "SMG:->\tLoaded values:\n";
    qDebug() << "SMG:->\t\tHOST:\t" << settings.value("CoreHost").toString();
    qDebug() << "SMG:->\t\tPORT:\t" << settings.value("CorePort").toString();
    qDebug() << "SMG:->\t\tPASS:\t" << settings.value("CorePWD").toString();

    ui->coreIP_le->setText(settings.value("CoreHost").toString());
    ui->corePort_le->setText(settings.value("CorePort").toString());
    ui->corePWD_le->setText(settings.value("CorePWD").toString());


    settings.endGroup();

}

Server_Widget::~Server_Widget()
{
    delete ui;
}
