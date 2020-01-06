#include "download_widget.h"
#include "ui_download_widget.h"

download_widget::download_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::download_widget)
{
    ui->setupUi(this);
}

download_widget::~download_widget()
{
    delete ui;
}
