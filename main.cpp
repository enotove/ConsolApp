#include <QCoreApplication>
#include <QtSql/QSqlQuery>
#include <QtNetwork/QNetworkRequest>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlQuery f;
    QNetworkRequest v;

    return a.exec();
}
