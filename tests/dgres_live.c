/*
 * dgres_live.c
 *
 * Test dgres_live()
 * ================
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:31:19 2019
 */

#include "../src/dgres_live.c"
#include <dtest.h>

CASE(empty) {
    assert_eq(0, 0);
}

SUITE(empty);
