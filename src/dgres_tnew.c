/*
 * dgres_tnew.c
 *
 * dgres_tnew
 * ==========
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:51:00 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include "dgres_tnew.h"
#include "dgres_new.h"
#include <pthread.h>
#include <unistd.h>
#include <memory.h>

static void *net_iloop(void *dgres) {
    dgres_new(dgres);

    return NULL;
}

int dgres_tnew(dgres_t *dgres) {
    int       err      = 0;
    pthread_t *pthread = (pthread_t *) &dgres->thread;

    if (pthread_create(pthread, NULL, net_iloop, dgres)) {
        err = 1;
    }

    return err;
}
