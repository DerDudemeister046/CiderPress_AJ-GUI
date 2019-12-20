#include "settings_widget.h"
#include "ui_settings_widget.h"

Settings_Widget::Settings_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings_Widget)
{
    ui->setupUi(this);
    setFilename("settings.xml");
    setRootElement("settings");
    loadSettings();
}

Settings_Widget::~Settings_Widget()
{
    delete ui;
}

void Settings_Widget::saveSettings()
{
    QFile file;
    QDomDocument doc(getFilename());
    QDomElement rt = doc.createElement(getRootElement());
    doc.appendChild(rt);

    QStringList ajcore = {"host", "port", "password"};
    QStringList directories {"temp", "complete", "upload"};

    QStringList input_core = {ui->host_le->text(), ui->port_le->text(), generateHash(ui->pwd_le->text())};

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

void Settings_Widget::loadSettings()
{
    QFile file;
    file.setFileName(getFilename());
    QDomDocument doc;
    QDomElement rt;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "ERROR: File cannot be opened";
    }
    else
    {
        qDebug() << "SUCCESS: File opened";
        if(!doc.setContent(&file))
        {
            qDebug() << "ERROR: Failed to load document";
        }
        qDebug() << "SUCCESS: document opened successfully";
        file.close();
    }
    rt = doc.firstChildElement();

    ui->host_le->setText(readChild(rt, "ajcore", "host"));
    ui->port_le->setText(readChild(rt, "ajcore", "port"));
    ui->pwd_le->setText(readChild(rt,"ajcore", "password"));
    ui->temp_down_le->setText(readChild(rt,"directories","temp"));
    ui->finished_down_le->setText(readChild(rt,"directories", "complete"));
    ui->upload_le->setText(readChild(rt,"directories", "upload"));

}


// Slots and Signals

void Settings_Widget::on_ok_btn_clicked()
{
    saveSettings();
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
