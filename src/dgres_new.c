/*
 * dgres_new.c
 *
 * dgres_new
 * ==========
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:39:14 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include "dgres_new.h"
#include <stdio.h>
#include <unistd.h>

int dgres_new(char *txt, int ntxt) {
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
