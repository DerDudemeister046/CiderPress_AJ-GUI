#include "ciderpress_gui.h"
#include "ui_ciderpress_gui.h"

CiderPress_Gui::CiderPress_Gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CiderPress_Gui)
{
    ui->setupUi(this);
    settings = new Settings_Widget;

    QMdiSubWindow *sw = new QMdiSubWindow;
    sw->setWidget(settings);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    ui->mdiArea->addSubWindow(sw);
    ui->mdiArea->tileSubWindows();
    //setCentralWidget(settings);
}

CiderPress_Gui::~CiderPress_Gui()
{
    delete ui;
}

