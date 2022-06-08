#include "unit_store.h"
#include <iostream>

void unit_store_createKit(Store* f){
    std::cout << "TEST 1 - Store class' createKit() method" << std::endl;

    f->createKit("Nome", "Descrição", "Nome do cliente", 20);
    QString name = f->getKitName(1);

    // Making assertion to verify if the kit was created.
    assert(name == QString::fromStdString("Nome"));
    
    std::cout << "OK!" << std::endl;
}

void unit_store_getQuery(Store* f){
    std::cout << "TEST 2 - Store class' getQuery() method" << std::endl;

    QSqlQuery* query = NULL;
    query = f->getQuery();

    // Making assertion to verify if the query returned isn't NULL.
    assert(query != NULL);
    
    std::cout << "OK!" << std::endl;
}

void unit_store_setQuery(Store* f){
    std::cout << "TEST 3 - Store class' setQuery() method" << std::endl;

    QSqlQuery* query = f->getQuery();

    // Making assertion to verify if the query passed to the store's constructor is the same as the one returned
    // by the method.
    assert(query != NULL);
    
    std::cout << "OK!" << std::endl;
}

void unit_store_queryExec(Store* f){
    std::cout << "TEST 4 - Store class' queryExec() method" << std::endl;

    bool response = f->queryExec("select * from kit where id=1");

    // Making assertion to verify if the method was executed by the query.
    assert(response == 1);

    std::cout << "OK!" << std::endl;
}

void unit_store_queryNext(Store* f){
    std::cout << "TEST 5 - Store class' queryNext() method" << std::endl;

    int count = 0;
    while(f->queryNext()){
        count++;
    }

    // Making assertion to verify if the method was executed by the query.
    assert(count > 0);
    
    std::cout << "OK!" << std::endl;
}

void unit_store_queryFirst(Store* f){
    std::cout << "TEST 6 - Store class' queryFirst() method" << std::endl;

    bool response = f->queryFirst();

    // Making assertion to verify if the method was executed by the query.
    assert(response == 1);
    
    std::cout << "OK!" << std::endl;
}

void unit_store_queryValue(Store* f){
    std::cout << "TEST 7 - Store class' queryValue() method" << std::endl;

    QString id = f->queryValue(0);

    // Making assertion to verify if the method was executed by the query.
    assert(id == QString::fromStdString("1"));
    
    std::cout << "OK!" << std::endl;
}

void unit_store_getKitName(Store* f){
    std::cout << "TEST 8 - Store class' getKitName() method" << std::endl;

    QString name = f->getKitName(1);

    // Making assertion to verify if the name was returned correctly.
    assert(name == QString::fromStdString("Nome"));
    
    std::cout << "OK!" << std::endl;
}

void unit_store_getKitDesc(Store* f){
    std::cout << "TEST 9 - Store class' getKitDesc() method" << std::endl;

    QString desc = f->getKitDesc(1);

    // Making assertion to verify if the desc was returned correctly.
    assert(desc == QString::fromStdString("Descrição"));
    
    std::cout << "OK!" << std::endl;
}

void unit_store_getKitNameClient(Store *f)
{
    std::cout << "TEST 10 - Store class' getKitNameClient() method" << std::endl;

    QString name_Client = f->getKitNameClient(1);

    // Making assertion to verify if the acquisition date was returned correctly.
    assert(name_Client == QString::fromStdString("Nome do cliente"));

    std::cout << "OK!" << std::endl;
}

void unit_store_getKitPrice(Store* f){
    std::cout << "TEST 10 - Store class' getKitPrice() method" << std::endl;

    QString price = f->getKitPrice(1);

    // Making assertion to verify if the acquisition date was returned correctly.
    assert(price == QString::fromStdString("20"));

    std::cout << "OK!" << std::endl;
}

void unit_store_setKit(Store *f)
{
    std::cout << "TEST 11 - Store class' setKitName() method" << std::endl;

    f->setKit(1, "Nome2", "Descricao", "NomeCliente", 30);
    QString name = f->getKitName(1);

    // Making assertion to verify if the id was modified.
    assert(name == QString::fromStdString("Nome2"));

    std::cout << "OK!" << std::endl;
}

void unit_store_deleteKit(Store* f){
    std::cout << "TEST 12 - Store class' deleteKit() method" << std::endl;

    f->deleteKit(1);
    QString name = f->getKitName(1);

    // Making assertion to verify if the kit was deleted.
    assert(name == QString(""));
    
    std::cout << "OK!" << std::endl;
}

// Function to run all the Store class' unit tests.
void run_unit_tests_store(Store* f){
    f->queryExec("UPDATE `sqlite_sequence` SET `seq` = 0 WHERE `name` = 'kit';");

    // Calling all the Store class' unit test functions.
    unit_store_createKit(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_getQuery(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_setQuery(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_queryExec(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_queryNext(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_queryFirst(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_queryValue(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_getKitName(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_getKitDesc(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_getKitPrice(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

    unit_store_setKit(f);
    //assert(numHandleCreated == numHandleDeleted + 1);
    //assert(numBodyCreated == numBodyDeleted + 1);

    unit_store_deleteKit(f);
    //assert(numHandleCreated == numHandleDeleted+1);
    //assert(numBodyCreated == numBodyDeleted+1);

}
