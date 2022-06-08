/*!
 \file unit_kit.h
 \brief This file contains the unit tests of the Cattle class for the GiroDeGado software.
*/

#ifndef UNIT_KIT
#define UNIT_KIT

#ifndef __unix__
#include <windows.h>
#endif

#include <assert.h>
#include <math.h>
#include "../../includes/kitImpl.h"
#include "../../includes/store.h"

//! Unit tests 
/**
* Creation of the unit tests for the Cattle class.
*/
void unit_kit_constructor();
/*!
  Function prototype for the Cattle class' destructor unit test.
*/
void unit_kit_destructor();

/*!
  Function prototype for the Cattle class' method setEarring() unit test.
*/
void unit_kit_getPreco(Store *f);

/*!
  Function prototype for the Cattle class' method setEarring() unit test.
*/
void unit_kit_setPreco(Store* f);

/*!
  Function prototype for the Cattle class' method getBreed() unit test.
*/
void unit_kit_getNomeUsuario(Store* f);

/*!
  Function prototype for the Cattle class' method setBreed() unit test.
*/
void unit_kit_setNomeUsuario(Store *f);

/*!
  Function prototype for the Cattle class' method getAcquisitionDate() unit test.
*/
void unit_kit_getDescricao(Store *f);

/*!
  Function prototype for the Cattle class' method setAcquisitionDate() unit test.
*/
void unit_kit_setDescricao(Store *f);

/*!
  Function prototype for the Cattle class' method getBirthDate() unit test.
*/
void unit_kit_getNomeKit(Store *f);

/*!
  Function prototype for the Cattle class' method setBirthDate() unit test.
*/
void unit_kit_setNomeKit(Store *f);

/*!
  Function prototype for the function that runs all the unit tests of the Cattle class.
*/
void run_unit_tests_kit(Store* f);

#endif
