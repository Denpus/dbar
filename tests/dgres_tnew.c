/*
 * dgres_tnew.c
 *
 * Test dgres_tnew()
 * ================
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:51:00 2019
 */

#include "../src/dgres_new.c"
#include "../src/dgres_tnew.c"
#include <dtest.h>

CASE(empty) {
    assert_eq(0, 0);
}

SUITE(empty);
