/*
 * dgres.h
 *
 * Headers dgres
 * =============
 * Progress bar in C
 *
 * Author   :   denkar
 * Created  :   05.09.19 11:17
 * Homepage :   https://github.com/Denpus/dgres
 * License  :   GPL-3.0
 * Version  :   0.1.1.1
 *
 * Copyright (C) Denis Karabadjak <denkar>
 */

#pragma once

#include <pthread.h>
#include <stdio.h>

typedef struct dgres_s {
    pthread_t thread;
    int       ntxt;
    char      *txt;
    FILE      *stream;
} dgres_t;

extern int dgres_new(dgres_t *dgres);

extern int dgres_tnew(dgres_t *dgres);

extern int dgres_live(dgres_t *dgres);

extern int dgres_end(dgres_t *dgres);

