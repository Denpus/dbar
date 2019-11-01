/*
 * main.c
 *
 * Example dgres_tnew()
 * ===============
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:51:00 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include <dgres.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>

int main(void) {
    int     err   = 0;
    dgres_t dgres = {
            .stream = stdout,
            .ntxt = 14,
            .txt = "Loading thread"
    };

    dgres_tnew(&dgres);

    sleep(5);

    dgres_end(&dgres);
    printf("end loading");
    fflush(dgres.stream);
    sleep(3);

    return err;
}
