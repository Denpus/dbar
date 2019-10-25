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

static char _loadtxt[100];
static int  _ntxt = 0;

static void *net_iloop(void *item) {
    dgres_new(_loadtxt, _ntxt);

    return NULL;
}

int dgres_tnew(size_t *thread, char *txt, int ntxt) {
    int       err      = 0;
    pthread_t *pthread = (pthread_t *) thread;
    char      *_txt    = _loadtxt;
    _ntxt = ntxt;

    memcpy(_txt, txt, (size_t) ntxt);

    if (pthread_create(pthread, NULL, net_iloop, NULL)) {
        err = 1;
    }

    return err;
}
