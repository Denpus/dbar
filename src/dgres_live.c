/*
 * dgres_live.c
 *
 * dgres_live
 * ==========
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:31:19 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include "dgres_live.h"
#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>
#include <memory.h>

int dgres_live(char *txt, int ntxt) {
    int       err      = 0;
    int       cnt      = 0;
    const int delay_ms = 1;
    const int nprint   = 4;

    while (1) {
        cnt = (cnt + 1) % nprint;

        fwrite(txt, (size_t) ntxt, 1, stdout);

        for (int i = 0; i < nprint; ++i) {
            fputc(i < cnt ? '.' : ' ', stdout);
        }

        fflush(stdout);
        fputc('\r', stdout);

        sleep(delay_ms);
    }

    return err;
}
