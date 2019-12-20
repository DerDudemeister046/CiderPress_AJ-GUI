#include "ciderpress_gui.h"
#include "ui_ciderpress_gui.h"

CiderPress_Gui::CiderPress_Gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CiderPress_Gui)
{
    ui->setupUi(this);
    settings = new Settings_Widget;
    //setCentralWidget(settings);
}

CiderPress_Gui::~CiderPress_Gui()
{
    delete ui;
}

