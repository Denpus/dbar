/*
 * dgres_end.c
 *
 * Test dgres_end()
 * ===============
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:26:42 2019
 */

#include "../src/dgres_end.c"
#include <dtest.h>

CASE(empty) {
    assert_eq(0, 0);
}

SUITE(empty);
