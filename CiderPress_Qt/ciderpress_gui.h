#ifndef CIDERPRESS_GUI_H
#define CIDERPRESS_GUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CiderPress_Gui; }
QT_END_NAMESPACE

class CiderPress_Gui : public QMainWindow
{
    Q_OBJECT

public:
    CiderPress_Gui(QWidget *parent = nullptr);
    ~CiderPress_Gui();

private:
    Ui::CiderPress_Gui *ui;
};
#endif // CIDERPRESS_GUI_H
