#include "./entity/kitmanagement.h"
#include "../api/includes/store.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>
#include <iostream>

int main(int argc, char *argv[]){
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");

    //Path dinamico do banco oficial
    QString path_ofc = QDir::currentPath();
    path_ofc = path_ofc + QString("/../gui/peticos.db");
    std::cout << path_ofc.toStdString() << std::endl;

    database.setDatabaseName(path_ofc);
    database.open();


    QSqlQuery q(database);

    Store * s = Store::getStore(&q);
    QApplication a(argc, argv);
    KitManagement w(nullptr, s);
    w.show();
    return a.exec();
}
