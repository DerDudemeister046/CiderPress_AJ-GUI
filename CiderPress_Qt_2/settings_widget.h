#ifndef SETTINGS_WIDGET_H
#define SETTINGS_WIDGET_H

#include <QWidget>
#include <QSettings>
#include <QDebug>

namespace Ui {
class Settings_Widget;
}

class Settings_Widget : public QWidget
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

    void on_apply_btn_clicked();

private:
    Ui::Settings_Widget *ui;
};

#endif // SETTINGS_WIDGET_H
