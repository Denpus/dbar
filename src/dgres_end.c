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

int dgres_end(dgres_t *dgres) {
    int err = 0;

    fflush(dgres->stream);

    return pthread_cancel(dgres->thread);
}
