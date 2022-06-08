/*!
 \file unit_farm.h
 \brief This file contains the unit tests of the Farm class for the GiroDeGado software.
*/

#ifndef UNIT_STORE
#define UNIT_STORE

#ifndef __unix__
#include <windows.h>
#endif

#include <assert.h>
#include <math.h>
#include "../../includes/storeImpl.h"

//! Unit tests 
/**
* Creation of the unit tests for the Farm class.
*/

/*!
  Function prototype for the Farm class' method createCattle() unit test.
*/
void unit_store_createKit(Store* s);

/*!
  Function prototype for the Farm class' method getQuery() unit test.
*/
void unit_store_getQuery(Store* s);

/*!
  Function prototype for the Farm class' method setQuery() unit test.
*/
void unit_store_setQuery(Store* s);

/*!
  Function prototype for the Farm class' method queryExec() unit test.
*/
void unit_store_queryExec(Store* s);

/*!
  Function prototype for the Farm class' method queryNext() unit test.
*/
void unit_store_queryNext(Store* s);

/*!
  Function prototype for the Farm class' method queryFirst() unit test.
*/
void unit_store_queryFirst(Store* s);

/*!
  Function prototype for the Farm class' method queryValue() unit test.
*/
void unit_store_queryValue(Store* s);

/*!
  Function prototype for the Farm class' method getCattleCEarring() unit test.
*/
void unit_store_getKitName(Store* s);

/*!
  Function prototype for the Farm class' method setCattleEarring() unit test.
*/
void unit_store_getKitNameClient(Store* s);

/*!
  Function prototype for the Farm class' method getCattleBreed() unit test.
*/
void unit_store_getKitDesc(Store* s);

/*!
  Function prototype for the Farm class' method setCattleBreed() unit test.
*/
void unit_store_getKitPrice(Store* s);

/*!
  Function prototype for the function that runs all the unit tests of the Farm class.
*/
void run_unit_tests_store(Store* s);

#endif
