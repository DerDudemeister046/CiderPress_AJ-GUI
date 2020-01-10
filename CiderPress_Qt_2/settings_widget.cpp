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
    saveSettings();
}

void Settings_Widget::on_cancel_btn_clicked()
{
    qDebug() << "SMG:->\tCancel button clicked.";
    loadSettings();
}

void Settings_Widget::on_apply_btn_clicked()
{
    qDebug() << "SMG:->\tApply button clicked.";
    saveSettings();
    this->close();
}
