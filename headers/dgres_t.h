/*
 * dgres_t.h
 *
 * dgres_t
 * =======
 *
 * Author   :  
 * Created  :  Fri Nov  1 07:20:44 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
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
