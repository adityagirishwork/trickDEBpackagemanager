/**
 * This file was automatically generated by the ICG based on the file:
 * /users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/rkf45/include/rkf45_second_order_ode_integrator.hh
 * This file contains database parameter declarations specific to the
 * data structures and enumerated types declared in the above file.
 * These database parameters are used by the Trick input and
 * data recording processors to gain access to important simulation
 * variable information.
 */

#define TRICK_IN_IOSRC
#include <stdlib.h>
#include "trick/MemoryManager.hh"
#include "trick/attributes.h"
#include "trick/parameter_types.h"
#include "trick/ClassSizeCheck.hh"
#include "trick/UnitsMap.hh"
#include "trick/checkpoint_stl.hh"
#include "/users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/rkf45/include/rkf45_second_order_ode_integrator.hh"

extern "C" {

ATTRIBUTES attrer7_utils__RKFehlberg45SecondOrderODEIntegrator[] = {
{"state_size", "int", "1", "", "",
  "n The sizes of the generalized position and generalized velocity vectors.",
  15,TRICK_INTEGER, sizeof(int), 0, 0, Language_CPP, 4,
  40, NULL, 1, {{2, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"problem_type", "er7_utils::Integration::ODEProblemType", "1", "", "",
  "n The type of problem to be solved.",
  15,TRICK_ENUMERATED, 0, 0, 0, Language_CPP, 4,
  48, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_pos", "double", "1", "", "",
  "n Position at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  56, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_vel", "double", "1", "", "",
  "n Velocity at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  64, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"dtheta", "double", "1", "", "",
  "n Product of delta t and weighted sum of generalized velocities.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  72, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"posdot_hist", "double", "1", "", "",
  "n Position derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  80, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"veldot_hist", "double", "1", "", "",
  "n Velocity derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  128, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__RKFehlberg45SecondOrderODEIntegrator() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;

    trick_MM->add_attr_info(std::string(attrer7_utils__RKFehlberg45SecondOrderODEIntegrator[1].type_name) , &attrer7_utils__RKFehlberg45SecondOrderODEIntegrator[1], __FILE__ , __LINE__ ) ;

    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::SecondOrderODEIntegrator"), &temp_attr , __FILE__ , __LINE__ ) ;
    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__RKFehlberg45SecondOrderODEIntegrator_c_intf() {
    er7_utils::init_attrer7_utils__RKFehlberg45SecondOrderODEIntegrator() ;
}

size_t io_src_sizeof_er7_utils__RKFehlberg45SecondOrderODEIntegrator() {
    return sizeof(er7_utils::RKFehlberg45SecondOrderODEIntegrator) ;
}

void io_src_destruct_er7_utils__RKFehlberg45SecondOrderODEIntegrator(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::RKFehlberg45SecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45SecondOrderODEIntegrator*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~RKFehlberg45SecondOrderODEIntegrator();
    }
}

void io_src_delete_er7_utils__RKFehlberg45SecondOrderODEIntegrator(void* address) {
    delete (er7_utils::RKFehlberg45SecondOrderODEIntegrator*)address;
}

} //extern "C"

struct UnitsMaper7_utils__RKFehlberg45SecondOrderODEIntegrator {
    UnitsMaper7_utils__RKFehlberg45SecondOrderODEIntegrator() {
        Trick::UnitsMap* units_map_ptr = Trick::UnitsMap::units_map();
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_state_size", "1") ;
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_problem_type", "1") ;
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_init_pos", "1") ;
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_init_vel", "1") ;
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_dtheta", "1") ;
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_posdot_hist", "1") ;
        units_map_ptr->add_param("RKFehlberg45SecondOrderODEIntegrator_veldot_hist", "1") ;
    }
} umer7_utils__RKFehlberg45SecondOrderODEIntegrator;

extern "C" {

ATTRIBUTES attrer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator[] = {
{"state_size", "int", "1", "", "",
  "n The sizes of the generalized position and generalized velocity vectors.",
  15,TRICK_INTEGER, sizeof(int), 0, 0, Language_CPP, 4,
  40, NULL, 1, {{2, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"problem_type", "er7_utils::Integration::ODEProblemType", "1", "", "",
  "n The type of problem to be solved.",
  15,TRICK_ENUMERATED, 0, 0, 0, Language_CPP, 4,
  48, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_pos", "double", "1", "", "",
  "n Position at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  56, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_vel", "double", "1", "", "",
  "n Velocity at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  64, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"dtheta", "double", "1", "", "",
  "n Product of delta t and weighted sum of generalized velocities.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  72, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"posdot_hist", "double", "1", "", "",
  "n Position derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  80, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"veldot_hist", "double", "1", "", "",
  "n Velocity derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  128, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;

    trick_MM->add_attr_info(std::string(attrer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator[1].type_name) , &attrer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator[1], __FILE__ , __LINE__ ) ;

    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::RKFehlberg45SecondOrderODEIntegrator"), &temp_attr , __FILE__ , __LINE__ ) ;
    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator_c_intf() {
    er7_utils::init_attrer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator() ;
}

size_t io_src_sizeof_er7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator() {
    return sizeof(er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator) ;
}

void* io_src_allocate_er7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator(int num) {
    er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator*)calloc(num, sizeof(er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator));
    for (int ii = 0; ii < num; ++ii) {
        new(&temp[ii]) er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator();
    }
    return (void*)temp;
}

void io_src_destruct_er7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~RKFehlberg45SimpleSecondOrderODEIntegrator();
    }
}

void io_src_delete_er7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator(void* address) {
    delete (er7_utils::RKFehlberg45SimpleSecondOrderODEIntegrator*)address;
}

} //extern "C"

struct UnitsMaper7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator {
    UnitsMaper7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator() {
        Trick::UnitsMap* units_map_ptr = Trick::UnitsMap::units_map();
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_state_size", "1") ;
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_problem_type", "1") ;
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_init_pos", "1") ;
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_init_vel", "1") ;
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_dtheta", "1") ;
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_posdot_hist", "1") ;
        units_map_ptr->add_param("RKFehlberg45SimpleSecondOrderODEIntegrator_veldot_hist", "1") ;
    }
} umer7_utils__RKFehlberg45SimpleSecondOrderODEIntegrator;

extern "C" {

ATTRIBUTES attrer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator[] = {
{"state_size", "int", "1", "", "",
  "n The sizes of the generalized position and generalized velocity vectors.",
  15,TRICK_INTEGER, sizeof(int), 0, 0, Language_CPP, 4,
  40, NULL, 1, {{2, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"problem_type", "er7_utils::Integration::ODEProblemType", "1", "", "",
  "n The type of problem to be solved.",
  15,TRICK_ENUMERATED, 0, 0, 0, Language_CPP, 4,
  48, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_pos", "double", "1", "", "",
  "n Position at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  56, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_vel", "double", "1", "", "",
  "n Velocity at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  64, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"dtheta", "double", "1", "", "",
  "n Product of delta t and weighted sum of generalized velocities.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  72, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"posdot_hist", "double", "1", "", "",
  "n Position derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  80, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"veldot_hist", "double", "1", "", "",
  "n Velocity derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  128, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;

    trick_MM->add_attr_info(std::string(attrer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator[1].type_name) , &attrer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator[1], __FILE__ , __LINE__ ) ;

    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::RKFehlberg45SecondOrderODEIntegrator"), &temp_attr , __FILE__ , __LINE__ ) ;
    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_c_intf() {
    er7_utils::init_attrer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator() ;
}

size_t io_src_sizeof_er7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator() {
    return sizeof(er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator) ;
}

void* io_src_allocate_er7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator(int num) {
    er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator*)calloc(num, sizeof(er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator));
    for (int ii = 0; ii < num; ++ii) {
        new(&temp[ii]) er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator();
    }
    return (void*)temp;
}

void io_src_destruct_er7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator();
    }
}

void io_src_delete_er7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator(void* address) {
    delete (er7_utils::RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator*)address;
}

} //extern "C"

struct UnitsMaper7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator {
    UnitsMaper7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator() {
        Trick::UnitsMap* units_map_ptr = Trick::UnitsMap::units_map();
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_state_size", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_problem_type", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_init_pos", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_init_vel", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_dtheta", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_posdot_hist", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator_veldot_hist", "1") ;
    }
} umer7_utils__RKFehlberg45GeneralizedDerivSecondOrderODEIntegrator;

extern "C" {

ATTRIBUTES attrer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator[] = {
{"state_size", "int", "1", "", "",
  "n The sizes of the generalized position and generalized velocity vectors.",
  15,TRICK_INTEGER, sizeof(int), 0, 0, Language_CPP, 4,
  40, NULL, 1, {{2, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"problem_type", "er7_utils::Integration::ODEProblemType", "1", "", "",
  "n The type of problem to be solved.",
  15,TRICK_ENUMERATED, 0, 0, 0, Language_CPP, 4,
  48, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_pos", "double", "1", "", "",
  "n Position at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  56, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"init_vel", "double", "1", "", "",
  "n Velocity at the start of an integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  64, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"dtheta", "double", "1", "", "",
  "n Product of delta t and weighted sum of generalized velocities.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  72, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"posdot_hist", "double", "1", "", "",
  "n Position derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  80, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"veldot_hist", "double", "1", "", "",
  "n Velocity derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  128, NULL, 2, {{6, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;

    trick_MM->add_attr_info(std::string(attrer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator[1].type_name) , &attrer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator[1], __FILE__ , __LINE__ ) ;

    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::RKFehlberg45SecondOrderODEIntegrator"), &temp_attr , __FILE__ , __LINE__ ) ;
    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_c_intf() {
    er7_utils::init_attrer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator() ;
}

size_t io_src_sizeof_er7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator() {
    return sizeof(er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator) ;
}

void* io_src_allocate_er7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator(int num) {
    er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator*)calloc(num, sizeof(er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator));
    for (int ii = 0; ii < num; ++ii) {
        new(&temp[ii]) er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator();
    }
    return (void*)temp;
}

void io_src_destruct_er7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator* temp = (er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~RKFehlberg45GeneralizedStepSecondOrderODEIntegrator();
    }
}

void io_src_delete_er7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator(void* address) {
    delete (er7_utils::RKFehlberg45GeneralizedStepSecondOrderODEIntegrator*)address;
}

} //extern "C"

struct UnitsMaper7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator {
    UnitsMaper7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator() {
        Trick::UnitsMap* units_map_ptr = Trick::UnitsMap::units_map();
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_state_size", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_problem_type", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_init_pos", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_init_vel", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_dtheta", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_posdot_hist", "1") ;
        units_map_ptr->add_param("RKFehlberg45GeneralizedStepSecondOrderODEIntegrator_veldot_hist", "1") ;
    }
} umer7_utils__RKFehlberg45GeneralizedStepSecondOrderODEIntegrator;

