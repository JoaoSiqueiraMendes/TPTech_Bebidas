
#ifndef FUNCTIONAL_TESTS
#define FUNCTIONAL_TESTS

#include <assert.h>
#include <math.h>
#include <iostream>
#include "../../includes/store.h"

/*!
  Function prototype for the functional test for creating, editing, reading and deleting a cattle.
*/
void functional_kit(Store* s);

/*!
  Function prototype for the function that runs all the functional tests.
*/
void run_functional_tests(Store* s);

#endif
