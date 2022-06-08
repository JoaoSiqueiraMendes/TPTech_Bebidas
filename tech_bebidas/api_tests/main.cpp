#include "./main_unit_test.h"
#include "./main_functional_test.h"

#include <QApplication>
#include <QtSql>
#include <QFileInfo>

#define UNIT_TEST 1
#define FUNCTIONAL_TEST 1

int main(int argc, char* argv[])
{
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

    QSqlQuery q;
    Store* s = Store::getStore(&q);

    // Execution of the unit tests of Cattle, Transaction, User and Farm classes
    if(UNIT_TEST){
        //Dynamic path of the data bank for tests
        QString path_test = QDir::currentPath();
        path_test = path_test + QString("/../../api_tests/peticos_tests.db");

        bancoDeDados.setDatabaseName(path_test);
        bancoDeDados.open();

        main_unit_test(s);

        bancoDeDados.close();
    }

    // Execution of the functional tests
    if(FUNCTIONAL_TEST){
        //Dynamic path of the data bank for tests
        QString path_test = QDir::currentPath();
        path_test = path_test + QString("/../../api_tests/peticos_tests.db");

        bancoDeDados.setDatabaseName(path_test);
        bancoDeDados.open();

        main_functional_test(s);

        bancoDeDados.close();
    }

    delete s;

    return 0;
}
