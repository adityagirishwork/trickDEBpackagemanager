/**
 * This file was automatically generated by the ICG based on the file:
 * /users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/rk4/include/rk4_second_order_ode_integrator_base.hh
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
#include "/users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/rk4/include/rk4_second_order_ode_integrator_base.hh"

extern "C" {

ATTRIBUTES attrer7_utils__RK4SecondOrderODEIntegrator[] = {
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
{"saved_pos", "double", "1", "", "",
  "n Position after stage 1.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  72, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"dtheta", "double", "1", "", "",
  "n Product of delta t and weighted sum of generalized velocities.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  80, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"posdot_hist", "double", "1", "", "",
  "n Position derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  88, NULL, 2, {{4, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"veldot_hist", "double", "1", "", "",
  "n Velocity derivatives at each step in the integration cycle.",
  15,TRICK_DOUBLE, sizeof(double), 0, 0, Language_CPP, 4,
  120, NULL, 2, {{4, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__RK4SecondOrderODEIntegrator() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;

    trick_MM->add_attr_info(std::string(attrer7_utils__RK4SecondOrderODEIntegrator[1].type_name) , &attrer7_utils__RK4SecondOrderODEIntegrator[1], __FILE__ , __LINE__ ) ;

    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::SecondOrderODEIntegrator"), &temp_attr , __FILE__ , __LINE__ ) ;
    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__RK4SecondOrderODEIntegrator_c_intf() {
    er7_utils::init_attrer7_utils__RK4SecondOrderODEIntegrator() ;
}

size_t io_src_sizeof_er7_utils__RK4SecondOrderODEIntegrator() {
    return sizeof(er7_utils::RK4SecondOrderODEIntegrator) ;
}

void io_src_destruct_er7_utils__RK4SecondOrderODEIntegrator(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::RK4SecondOrderODEIntegrator* temp = (er7_utils::RK4SecondOrderODEIntegrator*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~RK4SecondOrderODEIntegrator();
    }
}

void io_src_delete_er7_utils__RK4SecondOrderODEIntegrator(void* address) {
    delete (er7_utils::RK4SecondOrderODEIntegrator*)address;
}

} //extern "C"

struct UnitsMaper7_utils__RK4SecondOrderODEIntegrator {
    UnitsMaper7_utils__RK4SecondOrderODEIntegrator() {
        Trick::UnitsMap* units_map_ptr = Trick::UnitsMap::units_map();
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_state_size", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_problem_type", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_init_pos", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_init_vel", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_saved_pos", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_dtheta", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_posdot_hist", "1") ;
        units_map_ptr->add_param("RK4SecondOrderODEIntegrator_veldot_hist", "1") ;
    }
} umer7_utils__RK4SecondOrderODEIntegrator;

