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

// Slots and Signals

void Settings_Widget::on_ok_btn_clicked()
{

}

void Settings_Widget::on_cancel_btn_clicked()
{

}

void Settings_Widget::on_browse_temp_btn_clicked()
{

}

void Settings_Widget::on_browse_finish_btn_clicked()
{

}

void Settings_Widget::on_browse_upload_btn_clicked()
{

}
