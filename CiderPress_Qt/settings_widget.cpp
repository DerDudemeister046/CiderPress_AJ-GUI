#include "settings_widget.h"
#include "ui_settings_widget.h"

Settings_Widget::Settings_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings_Widget)
{
    ui->setupUi(this);
    setFilename("settings.xml");
    setRootElement("settings");
}

Settings_Widget::~Settings_Widget()
{
    delete ui;
}

// Slots and Signals

void Settings_Widget::on_ok_btn_clicked()
{
    QFile file;
    QDomDocument doc(getFilename());
    QDomElement rt = doc.createElement(getRootElement());
    doc.appendChild(rt);

    QStringList ajcore = {"host", "port", "password"};
    QStringList directories {"temp", "complete", "upload"};

    QStringList input_core = {ui->host_le->text(), ui->port_le->text(), ui->pwd_le->text()};

    createChild(doc,rt,"ajcore",ajcore,input_core);

    QStringList input_dir = {ui->temp_down_le->text(), ui->finished_down_le->text(), ui->upload_le->text()};

    createChild(doc,rt,"directories",directories,input_dir);

    file.setFileName(getFilename());
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "ERROR: Cant open file!";
    }
    QTextStream out(&file);
    QString xml = doc.toString();
    out << xml;

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
