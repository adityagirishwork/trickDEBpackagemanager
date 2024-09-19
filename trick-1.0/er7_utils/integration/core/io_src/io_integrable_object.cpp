/**
 * This file was automatically generated by the ICG based on the file:
 * /users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/core/include/integrable_object.hh
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
#include "/users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/core/include/integrable_object.hh"

extern "C" {

ATTRIBUTES attrer7_utils__IntegrableObject[] = {
{"integ_group", "er7_utils::BaseIntegrationGroup", "1", "", "",
  "n The integration group that integrates this body, and possibly others.",
  15,TRICK_STRUCTURED, 0, 0, 0, Language_CPP, 4,
  8, NULL, 1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL},
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__IntegrableObject() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;

    trick_MM->add_attr_info(std::string(attrer7_utils__IntegrableObject[0].type_name) , &attrer7_utils__IntegrableObject[0], __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__IntegrableObject_c_intf() {
    er7_utils::init_attrer7_utils__IntegrableObject() ;
}

size_t io_src_sizeof_er7_utils__IntegrableObject() {
    return sizeof(er7_utils::IntegrableObject) ;
}

void io_src_destruct_er7_utils__IntegrableObject(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::IntegrableObject* temp = (er7_utils::IntegrableObject*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~IntegrableObject();
    }
}

void io_src_delete_er7_utils__IntegrableObject(void* address) {
    delete (er7_utils::IntegrableObject*)address;
}

} //extern "C"

struct UnitsMaper7_utils__IntegrableObject {
    UnitsMaper7_utils__IntegrableObject() {
        Trick::UnitsMap* units_map_ptr = Trick::UnitsMap::units_map();
        units_map_ptr->add_param("IntegrableObject_integ_group", "1") ;
    }
} umer7_utils__IntegrableObject;

