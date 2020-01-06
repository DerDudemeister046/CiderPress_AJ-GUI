#ifndef REQUEST_MANAGER_H
#define REQUEST_MANAGER_H

#include <QObject>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QAuthenticator>
#include <QNetworkProxy>

class Request_Manager : public QObject
{
    Q_OBJECT
public:
    explicit Request_Manager(QObject *parent=nullptr);
public slots:
    void get(QString location);
    void post(QString location, QByteArray data);
private:
    QNetworkAccessManager manager;
private slots:
    void readyRead();
    void authenticationRequired(QNetworkReply *reply, QAuthenticator *authenticator);
    void encrypted(QNetworkReply *reply);
    void finished(QNetworkReply *reply);
    void networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility accessible);
    void preSharedKeyAuthenticationRequired(QNetworkReply *reply, QSslPreSharedKeyAuthenticator *authenticator);
    void proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *authenticator);
    void sslErrors(QNetworkReply *reply, const QList<QSslError> &errors);
};

#endif // REQUEST_MANAGER_H
