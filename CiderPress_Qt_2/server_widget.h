#ifndef SERVER_WIDGET_H
#define SERVER_WIDGET_H

#include <QWidget>

namespace Ui {
class Server_Widget;
}

class Server_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Server_Widget(QWidget *parent = nullptr);
    ~Server_Widget();

private:
    Ui::Server_Widget *ui;
};

#endif // SERVER_WIDGET_H
