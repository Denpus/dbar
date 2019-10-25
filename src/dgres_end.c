/*
 * dgres_end.c
 *
 * dgres_end
 * ==========
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:26:42 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include "dgres_end.h"
#include <pthread.h>
#include <stdio.h>

int dgres_end(size_t thread) {
    int err = 0;

    fflush(stdout);

    return pthread_cancel(thread);
}
