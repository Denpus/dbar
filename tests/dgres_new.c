/*
 * dgres_new.c
 *
 * Test dgres_new()
 * ===============
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:39:14 2019
 */

#include "../src/dgres_new.c"
#include <dtest.h>

CASE(empty) {
    assert_eq(0, 0);
}

SUITE(empty);
