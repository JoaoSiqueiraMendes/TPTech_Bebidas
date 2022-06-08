#include "functional_tests.h" 

// Function for the functional test for creating, editing, reading and deleting a cattle.
void functional_kit(Store* s){
    std::cout << "TEST 1 - Creating, editing, reading and deleting a kit" << std::endl;

    // Creating a cattle
    s->createKit("Kit 1", "Descricao", "John Doe", 40.0);

    // Editing a cattle
    s->setKit(1, "Kit 1 Modificado", "Descricao Modificada", "John Doe 2", 50.0);

    // Reading data from a cattle
    QString name = s->getKitName(1);
    QString desc = s->getKitDesc(1);
    QString nameClient = s->getKitNameClient(1);
    float price = s->getKitPrice(1).toFloat();

    assert(name == "Kit 1 Modificado");
    assert(desc == "Descricao Modificada");
    assert(nameClient == "John Doe 2");
    assert(fabs(price - 50.0) < 0.0001);

    // Deleting a cattle
    s->deleteKit(1);

    QString name2 = s->getKitName(1);
    assert(name2 == "");

    std::cout << "OK!" << std::endl;
}

// Function for the function that runs all the functional tests.
void run_functional_tests(Store* s){
    s->queryExec("UPDATE `sqlite_sequence` SET `seq` = 0 WHERE `name` = 'kit';");
    // Calling all the functional test functions.
    // The number of handles and bodies created are 1 lower than the number of handles and bodies deleted
    // because of the Farm* f, created for testing purposes.

    functional_kit(s);
}
