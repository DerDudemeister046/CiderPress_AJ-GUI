#ifndef DOWNLOAD_WIDGET_H
#define DOWNLOAD_WIDGET_H

#include <QWidget>

namespace Ui {
class download_widget;
}

class download_widget : public QWidget
{
    Q_OBJECT

public:
    explicit download_widget(QWidget *parent = nullptr);
    ~download_widget();

private:
    Ui::download_widget *ui;
};

#endif // DOWNLOAD_WIDGET_H
