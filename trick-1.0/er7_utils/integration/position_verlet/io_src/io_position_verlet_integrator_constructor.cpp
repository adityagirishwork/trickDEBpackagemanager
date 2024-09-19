/**
 * This file was automatically generated by the ICG based on the file:
 * /users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/position_verlet/include/position_verlet_integrator_constructor.hh
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
#include "/users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/position_verlet/include/position_verlet_integrator_constructor.hh"

extern "C" {

ATTRIBUTES attrer7_utils__PositionVerletIntegratorConstructor[] = {
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__PositionVerletIntegratorConstructor() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;


    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::IntegratorConstructor"), &temp_attr , __FILE__ , __LINE__ ) ;
    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__PositionVerletIntegratorConstructor_c_intf() {
    er7_utils::init_attrer7_utils__PositionVerletIntegratorConstructor() ;
}

size_t io_src_sizeof_er7_utils__PositionVerletIntegratorConstructor() {
    return sizeof(er7_utils::PositionVerletIntegratorConstructor) ;
}

void* io_src_allocate_er7_utils__PositionVerletIntegratorConstructor(int num) {
    er7_utils::PositionVerletIntegratorConstructor* temp = (er7_utils::PositionVerletIntegratorConstructor*)calloc(num, sizeof(er7_utils::PositionVerletIntegratorConstructor));
    for (int ii = 0; ii < num; ++ii) {
        new(&temp[ii]) er7_utils::PositionVerletIntegratorConstructor();
    }
    return (void*)temp;
}

void io_src_destruct_er7_utils__PositionVerletIntegratorConstructor(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::PositionVerletIntegratorConstructor* temp = (er7_utils::PositionVerletIntegratorConstructor*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~PositionVerletIntegratorConstructor();
    }
}

void io_src_delete_er7_utils__PositionVerletIntegratorConstructor(void* address) {
    delete (er7_utils::PositionVerletIntegratorConstructor*)address;
}

} //extern "C"

struct UnitsMaper7_utils__PositionVerletIntegratorConstructor {
} umer7_utils__PositionVerletIntegratorConstructor;

