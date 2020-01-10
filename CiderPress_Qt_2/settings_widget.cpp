#include "settings_widget.h"
#include "ui_settings_widget.h"

Settings_Widget::Settings_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings_Widget)
{
    ui->setupUi(this);
}

Settings_Widget::~Settings_Widget()
{
    delete ui;
}

void Settings_Widget::save(QString group, QString section, QString value)
{
    qDebug() << "SMG:->\tSaving file.";

    QSettings settings("CiderPress", "Settings-Widget");
    settings.beginGroup(group);
    settings.setValue(section,value);
    settings.endGroup();
}

void Settings_Widget::load(QString group, QString section)
{
    qDebug() << "SMG:->\tLoading file.";
    QSettings settings("CiderPress", "Settings-Widget");
    settings.beginGroup(group);
    qDebug() << "SMG:->\tLoaded value:\n";
    qDebug() << "SMG:->\t\tHOST:\t" << settings.value(section).toString();
    settings.endGroup();
}

void Settings_Widget::saveSettings()
{
    qDebug() << "SMG:->\tSaving file.";

    QSettings settings("CiderPress", "Settings-Widget");
    settings.beginGroup("CoreSettings");
    settings.setValue("CoreHost","192.168.0.2");
    settings.setValue("CorePort","9851");
    settings.setValue("CorePWD","12345678");
    settings.endGroup();
}

void Settings_Widget::loadSettings()
{
    qDebug() << "SMG:->\tLoading file.";
    QSettings settings("CiderPress", "Settings-Widget");
    settings.beginGroup("CoreSettings");

    qDebug() << "SMG:->\tLoaded values:\n";
    qDebug() << "SMG:->\t\tHOST:\t" << settings.value("CoreHost").toString();
    qDebug() << "SMG:->\t\tPORT:\t" << settings.value("CorePort").toString();
    qDebug() << "SMG:->\t\tPASS:\t" << settings.value("CorePWD").toString();

    settings.endGroup();
}

void Settings_Widget::on_ok_btn_clicked()
{
    qDebug() << "SMG:->\tOK button clicked.";
    save("CoreSettings","CoreHost",ui->host_le->text());
    save("CoreSettings","CorePort",ui->port_le->text());
    save("CoreSettings","CorePWD",ui->pwd_le->text());
}

void Settings_Widget::on_cancel_btn_clicked()
{
    qDebug() << "SMG:->\tCancel button clicked.";

    load("CoreSettings","CoreHost");
    load("CoreSettings","CorePort");
    load("CoreSettings","CorePWD");
}

void Settings_Widget::on_apply_btn_clicked()
{
    qDebug() << "SMG:->\tApply button clicked.";
    save("CoreSettings","CoreHost",ui->host_le->text());
    save("CoreSettings","CorePort",ui->port_le->text());
    save("CoreSettings","CorePWD",ui->pwd_le->text());
    this->close();
}
