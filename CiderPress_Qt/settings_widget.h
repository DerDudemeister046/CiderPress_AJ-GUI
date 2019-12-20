#ifndef SETTINGS_WIDGET_H
#define SETTINGS_WIDGET_H

#include <QWidget>
#include "xml_manager.h"
#include "md5_generator.h"


namespace Ui {
class Settings_Widget;
}

class Settings_Widget : public QWidget, public XML_Manager, public MD5_Generator
{
    Q_OBJECT

public:
    explicit Settings_Widget(QWidget *parent = nullptr);
    ~Settings_Widget();
private:
    void saveSettings();
    void loadSettings();
private slots:
    void on_ok_btn_clicked();

    void on_cancel_btn_clicked();

    void on_browse_temp_btn_clicked();

    void on_browse_finish_btn_clicked();

    void on_browse_upload_btn_clicked();

private:
    Ui::Settings_Widget *ui;
};

#endif // SETTINGS_WIDGET_H
