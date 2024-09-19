/**
 * This file was automatically generated by the ICG based on the file:
 * /users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/core/include/integrator_result_merger.hh
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
#include "/users/agirish/trick_tutorial/trick/trick_source/er7_utils/integration/core/include/integrator_result_merger.hh"

extern "C" {

ATTRIBUTES attrer7_utils__IntegratorResultMerger[] = {
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__IntegratorResultMerger() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;


    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::Er7UtilsDeletable"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__IntegratorResultMerger_c_intf() {
    er7_utils::init_attrer7_utils__IntegratorResultMerger() ;
}

size_t io_src_sizeof_er7_utils__IntegratorResultMerger() {
    return sizeof(er7_utils::IntegratorResultMerger) ;
}

void* io_src_allocate_er7_utils__IntegratorResultMerger(int num) {
    er7_utils::IntegratorResultMerger* temp = (er7_utils::IntegratorResultMerger*)calloc(num, sizeof(er7_utils::IntegratorResultMerger));
    for (int ii = 0; ii < num; ++ii) {
        new(&temp[ii]) er7_utils::IntegratorResultMerger();
    }
    return (void*)temp;
}

void io_src_destruct_er7_utils__IntegratorResultMerger(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::IntegratorResultMerger* temp = (er7_utils::IntegratorResultMerger*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~IntegratorResultMerger();
    }
}

void io_src_delete_er7_utils__IntegratorResultMerger(void* address) {
    delete (er7_utils::IntegratorResultMerger*)address;
}

} //extern "C"

struct UnitsMaper7_utils__IntegratorResultMerger {
} umer7_utils__IntegratorResultMerger;

extern "C" {

ATTRIBUTES attrer7_utils__BogusIntegratorResultMerger[] = {
{"", "", "1", "", "",
  "",
  15,TRICK_VOID, 0, 0, 0, Language_CPP, 0,
  0, NULL, 0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}},
  NULL, NULL, NULL, NULL} };

} //extern "C"

namespace er7_utils {

void init_attrer7_utils__BogusIntegratorResultMerger() {

    static int initialized ;
    if (initialized) {
        return;
    }
    initialized = 1;


    ATTRIBUTES temp_attr ;

    trick_MM->add_attr_info( std::string("er7_utils::IntegratorResultMerger"), &temp_attr , __FILE__ , __LINE__ ) ;
}
}

extern "C" {

void init_attrer7_utils__BogusIntegratorResultMerger_c_intf() {
    er7_utils::init_attrer7_utils__BogusIntegratorResultMerger() ;
}

size_t io_src_sizeof_er7_utils__BogusIntegratorResultMerger() {
    return sizeof(er7_utils::BogusIntegratorResultMerger) ;
}

void* io_src_allocate_er7_utils__BogusIntegratorResultMerger(int num) {
    er7_utils::BogusIntegratorResultMerger* temp = (er7_utils::BogusIntegratorResultMerger*)calloc(num, sizeof(er7_utils::BogusIntegratorResultMerger));
    for (int ii = 0; ii < num; ++ii) {
        new(&temp[ii]) er7_utils::BogusIntegratorResultMerger();
    }
    return (void*)temp;
}

void io_src_destruct_er7_utils__BogusIntegratorResultMerger(void* address __attribute__((unused)), int num __attribute__((unused))) {
    using namespace er7_utils;
    er7_utils::BogusIntegratorResultMerger* temp = (er7_utils::BogusIntegratorResultMerger*)address;
    for (int ii = 0; ii < num; ++ii) {
        temp[ii].~BogusIntegratorResultMerger();
    }
}

void io_src_delete_er7_utils__BogusIntegratorResultMerger(void* address) {
    delete (er7_utils::BogusIntegratorResultMerger*)address;
}

} //extern "C"

struct UnitsMaper7_utils__BogusIntegratorResultMerger {
} umer7_utils__BogusIntegratorResultMerger;

