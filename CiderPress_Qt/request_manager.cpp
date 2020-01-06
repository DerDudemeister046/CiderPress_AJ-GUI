#include "request_manager.h"

Request_Manager::Request_Manager(QObject *parent) : QObject(parent)
{
    connect(&manager,&QNetworkAccessManager::authenticationRequired,this,&Request_Manager::authenticationRequired);
    connect(&manager,&QNetworkAccessManager::encrypted,this,&Request_Manager::encrypted);
    connect(&manager,&QNetworkAccessManager::networkAccessibleChanged,this,&Request_Manager::networkAccessibleChanged);
    connect(&manager,&QNetworkAccessManager::preSharedKeyAuthenticationRequired,this,&Request_Manager::preSharedKeyAuthenticationRequired);
    connect(&manager,&QNetworkAccessManager::proxyAuthenticationRequired,this,&Request_Manager::proxyAuthenticationRequired);
    connect(&manager,&QNetworkAccessManager::sslErrors,this,&Request_Manager::sslErrors);
}

void Request_Manager::get(QString location)
{
    qDebug() << "Getting from server...";
    QNetworkReply* reply = manager.get(QNetworkRequest(QUrl(location)));
    connect(reply, &QNetworkReply::readyRead,this,&Request_Manager::readyRead);
}

void Request_Manager::post(QString location, QByteArray data)
{
    qDebug() << "Posting to server...";
    QNetworkRequest request = QNetworkRequest(QUrl(location));
    request.setHeader(QNetworkRequest::ContentTypeHeader,"text/plain");

    QNetworkReply* reply = manager.post(request, data);
    connect(reply, &QNetworkReply::readyRead,this,&Request_Manager::readyRead);
}

void Request_Manager::readyRead()
{
    qDebug() << "Ready_Read ...";

    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if(reply)
    {
        qDebug() << reply->readAll();
    }
}

void Request_Manager::authenticationRequired(QNetworkReply *reply, QAuthenticator *authenticator)
{
    Q_UNUSED(reply)
    Q_UNUSED(authenticator)
    qDebug() << "authenticationRequired";
}

void Request_Manager::encrypted(QNetworkReply *reply)
{
    Q_UNUSED(reply)
    qDebug() << "encrypted";
}

void Request_Manager::finished(QNetworkReply *reply)
{
    Q_UNUSED(reply)
    qDebug() << "finished";
}

void Request_Manager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility accessible)
{
    Q_UNUSED(accessible)
    qDebug() << "Ready_Read ...";
}

void Request_Manager::preSharedKeyAuthenticationRequired(QNetworkReply *reply, QSslPreSharedKeyAuthenticator *authenticator)
{
    Q_UNUSED(reply)
    Q_UNUSED(authenticator)
    qDebug() << "networkAccessibleChanged";
}

void Request_Manager::proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *authenticator)
{
    Q_UNUSED(proxy)
    Q_UNUSED(authenticator)
    qDebug() << "proxyAuthenticationRequired";
}

void Request_Manager::sslErrors(QNetworkReply *reply, const QList<QSslError> &errors)
{
    Q_UNUSED(reply)
    Q_UNUSED(errors)
    qDebug() << "sslErrors";
}
